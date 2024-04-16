// 算法接口
#ifndef ALGORITHM_INTERFACE_H
#define ALGORITHM_INTERFACE_H

#include "Route.h"

class AlgorithmInterface {
public:
    virtual ~AlgorithmInterface() {}
    virtual Route solve() = 0; // 纯虚函数，需要被派生类实现
};

#endif // ALGORITHM_INTERFACE_H