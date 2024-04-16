// 路线
#ifndef ROUTE_H
#define ROUTE_H

#include "Vehicle.h"
#include "Customer.h"
#include <vector>

class Route {
    std::vector<Customer> customerVisits;
    double totalCost;
    double totalTime;

public:
    Route() : totalCost(0.0), totalTime(0.0) {}

    // 方法来添加客户点、计算总成本和时间等
};

#endif // ROUTE_H