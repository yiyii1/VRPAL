// 客户点
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Point.h"

class Customer {
    Point location;
    int weight;
    std::pair<int, int> timeWindow;

public:
    Customer(Point location, int weight, std::pair<int, int> timeWindow)
        : location(location), weight(weight), timeWindow(timeWindow) {}

    // Customer-specific methods go here
};

#endif // CUSTOMER_H