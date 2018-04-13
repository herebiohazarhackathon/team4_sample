#include "uniq.h"

string uniq(const string& str)
{
    string result;
    result.reserve(str.size());
    for (const auto& i : str)
    {
        bool isExist = false;
        for (const auto& j : result)
        {
            if (i == j)
            {
                isExist = true;
                break;
            }
        }
        if (!isExist)
            result += i;
    }
    return result;
}
