#include "gcd.h"

int gcd(int a, int b)
{
    int r;
    do
    {
        r = a % b;
        if(r == 0)
            break;
        a = b;
        b = r;
    }
    while(true);

    return b;
}
