// 物流模型接口   
#ifndef LOGISTICS_MODEL_H
#define LOGISTICS_MODEL_H

#include "Vehicle.h"    //车辆
#include "Customer.h"   //客户点
#include "Center.h"     //配送中心
#include <vector>       

class LogisticsModel {
public:
    std::vector<Center> centers;
    std::vector<Vehicle> vehicles;
    std::vector<Customer> customers;

    void readData(const std::string& fileName);
};

#endif 