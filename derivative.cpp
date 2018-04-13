#include "derivative.h"
#include <algorithm>



void Derivative::compute(vector<Variable>& expression)
{
    expression.erase(remove_if(expression.begin(), expression.end(), [](const Variable& var) {
        return var.getP() == 0;
	}), expression.end());
    for (auto& i : expression) {
        i.setK(i.getP() * i.getK());
        i.setP(i.getP() - 1);
    }
}
