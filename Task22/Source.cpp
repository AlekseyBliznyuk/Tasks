#include <iostream>
using namespace std;
double s_pow(double a, int power)
{
    if (power == 0)

    {
        return 1;

    }
    if (power % 2 == 0)
    {
        return s_pow(a * a, power / 2);
    }
    else
    {
        return a * s_pow(a, power - 1);
    }
}

int main()
{
    double a;
    int n;
    cin >> a >> n;
    cout << s_pow(a, n) << endl;
    system("pause");
    return 0;
}