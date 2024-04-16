// 配送中心 坐标
#ifndef CENTER_H
#define CENTER_H

#include "Point.h"

class Center : public Point {
    // Additional center-specific attributes and methods go here

public:
    Center(Point location) : Point(location) {}

    // Center-specific methods go here
};

#endif