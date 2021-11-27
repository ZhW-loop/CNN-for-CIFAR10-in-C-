#pragma once

#include <math.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// ��������ʹ��CrossEntropy δʹ��MSE
class MSE {

public:

    virtual double compute(const vector<double>& prediction,
        int8_t expected_int) const;

    virtual vector<double> backward_start(const vector<double>& prediction,
        int8_t expected_int) const;

}; 
