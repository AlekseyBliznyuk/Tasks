#include <iostream>
using namespace std;

double Fact(double x)
{
    if (x == 0)
        return 1;
    return x * Fact(x - 1);
}
double fsm(int n)
{
    double i = 1;
    double sum = 0;

    while (i <= n)
    {
        sum += 1 / (Fact(i));
        i++;
    }
    return sum;
}
int main()
{
    int n;
    cout << "n:"; cin >> n;
    cout << "Summa: " << fsm(n);
    return 0;
}
