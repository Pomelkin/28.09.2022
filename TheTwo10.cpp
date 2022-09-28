#include "pt4.h"
using namespace std;

void Solve()
{
    Task("TheTwo10");
    int k, x,i;
    pt >> k >> x;
    i = 0;
    while ((k - i) > 0)
    {
        x -= ((k - i) * 2);
        i += 1;
    }
    pt << x;
}