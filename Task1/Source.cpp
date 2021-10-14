#include <iostream>
using namespace std;

double Fact(int n)
{
	if (n == 0)
		return 1;
	return n * Fact(n - 1);
}
double Sum(int n)
{
	double sum = 1;
	for (int i = 1; i < n; i++)
	{
		sum += 1 / Fact(n);
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
