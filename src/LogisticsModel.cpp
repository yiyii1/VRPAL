// 解析并存储数据
#include "LogisticsModel.h"
#include "Vehicle.h"
#include "Customer.h"
#include "Center.h"
#include "Utility.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

void LogisticsModel::readData(const std::string& fileName) {
    std::ifstream file(fileName);
    std::string line;
    int count;

    // 检查文件是否打开
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open the file.");
    }

    // 中心、车辆、客户点数量是否异常
    file >> count; // Number of centers
    if (count < 0) {
        throw std::invalid_argument("Invalid number of centers.");
    }
    centers.resize(count);
    for (int i = 0; i < count; ++i) {
        int x, y;
        file >> x >> y;
        if (file.fail()) {
            throw std::runtime_error("Error reading center coordinates.");
        }
        centers[i] = {x, y};
    }

    file >> count; // Number of vehicle types
    if (count < 0) {
        throw std::invalid_argument("Invalid number of vehicle types.");
    }
    while (file.peek() == '\n') { // Skip empty lines
        file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    for (int i = 0; i < count; ++i) {
        int numVehicles, capacity, speed;
        double unitCost, startCost;
        file >> numVehicles >> capacity >> speed >> unitCost >> startCost;
        if (file.fail()) {
            throw std::runtime_error("Error reading vehicle information.");
        }
        for (int j = 0; j < numVehicles; ++j) {
            vehicles.emplace_back(new Vehicle(capacity, unitCost, startCost));
        }
    }

    file >> count; // Number of customers
    if (count < 0) {
        throw std::invalid_argument("Invalid number of customers.");
    }
    customers.resize(count);
    for (int i = 0; i < count; ++i) {
        Point location;
        int weight, timeWindowStart, timeWindowEnd;
        file >> location.x >> location.y >> weight >> timeWindowStart >> timeWindowEnd;
        if (file.fail()) {
            throw std::runtime_error("Error reading customer information.");
        }
        customers[i] = {location, weight, {timeWindowStart, timeWindowEnd}};
    }

    // 是否有额外数据
    getline(file, line);
    if (!file.eof()) {
        throw std::invalid_argument("Extra data found at the end of the file.");
    }
    file.close();
}