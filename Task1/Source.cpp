#include <iostream>
using namespace std;

double Fact(double n)//ôàêòîðèàë ÷èñëà
{
	if (n == 0)
		return 1;
	return n * Fact(n - 1);
}
double Sum(int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = 1 / Fact(n);
		sum++;
		return sum;
	}
}

int main()
{
	int n;
	cout << "n: ";
	cin >> n;
	cout << "Summa: " << Sum(n);
	return 0;
}
