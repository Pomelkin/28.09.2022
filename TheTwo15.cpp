#include "pt4.h"
#include <cmath>
using namespace std;

void Solve()
{
    Task("TheTwo15");
    int n;
    double s = 0, i = 0;
    pt >> n;
    for (int i1 = 1; i1 <= n; i1++)
    {
        i = i1;
        s += (pow(i, i)) / (i * (i + 1));
    }
    pt << s;
}
