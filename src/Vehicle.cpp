#include "Vehicle.h"

// 车辆 ：  数量，载重能力，速度，单位距离成本，启动成本
Vehicle::Vehicle(int capacity, double unitDistanceCost, double startCost)
    : capacity(capacity), unitDistanceCost(unitDistanceCost), startCost(startCost) {}

double Vehicle::calculateRouteCost(const std::vector<Customer>& route) const {
    double totalCost = 0.0;
    for (size_t i = 0; i < route.size() - 1; ++i) {
        totalCost += euclideanDistance(route[i].location, route[i + 1].location);
    }
    return totalCost;
}