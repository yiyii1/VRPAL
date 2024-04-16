// 车辆基类
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
protected:
    int capacity;
    int speed;
    double unitCost;
    double startCost;

public:
    Vehicle(int capacity, int speed, double unitCost, double startCost)
        : capacity(capacity), speed(speed), unitCost(unitCost), startCost(startCost) {}

    virtual ~Vehicle() {}

    // Vehicle-specific methods go here
};

#endif // VEHICLE_H