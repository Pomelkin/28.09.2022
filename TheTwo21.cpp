#include "pt4.h"
using namespace std;

void Solve()
{
    Task("TheTwo21");
    bool ot = true;
    int n,a = 0,b = 0;
    pt >> n;
    while (n > 0)
    {
        b = a;
        a = n % 10;
        if ((a < b) || (a = b && b!=0))
        {
            ot = false;
            break;
        }
        n /= 10;
    }
    pt << ot;
}
