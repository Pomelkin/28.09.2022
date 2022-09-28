#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double x, s = 0, f;
    setlocale(LC_ALL, "Russian");
    
    do
    {
        cout << "Введите n и x \n";
        cin >> n >> x;
    } while (abs(x) > 1 || n <= 0);
    
    for (int i = 0; i <= n; i++)
    {
        s += pow(x, i);
    }
    
    f = (1) / (1 - x);
    
    cout <<"сумма = " << s << "\n" <<"значение функции = " << f;
    return 0;
}

