#ifndef DERIVATIVE_H
#define DERIVATIVE_H

#include <vector>
#include <variable.h>

using namespace std;

class Derivative
{
public:
    static void compute(vector<Variable>& expression);
};

#endif // DERIVATIVE_H
