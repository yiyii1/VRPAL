#include "Customer.h"


//  客户： 坐标，货物重量，到货时间
Customer::Customer(Point location, int weight, std::pair<int, int> timeWindow)
    : location(location), weight(weight), timeWindow(timeWindow) {}