#include <iostream>
using namespace std;

double Fact(double n)//��������� �����
{
	if (n == 0)
		return 1;
	return n * Fact(n - 1);
}
double fsm_rec(int n)//����� ������ ����
{
	if (n == 1) return 1;
	return 1 / Fact(n) + fsm_rec(--n);
}

int main()
{
	int n;
	cout << "n: "; 
	cin >> n;
	cout << "Summa: " << fsm_rec(--n);
	return 0;
}