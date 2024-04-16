#include "DistanceMetric.h"


// 计算连点之间距离
double euclideanDistance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}