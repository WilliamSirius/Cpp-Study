#include <iostream>
using namespace std;
void printTriangleA(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}
void printTriangleB(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= (n - i); j++)
			cout << "  ";
		for (int k = 1; k <= (2 * i - 1); k++)
			cout << " *";
		cout << endl;
	}
}
int main()
{
	int n1, n2;
	cout << "Input num:";
	cin >> n1;
	printTriangleA(n1);
	cout << "Input num:";
	cin >> n2;
	printTriangleB(n2);
	system("pause");
	return 0;
}