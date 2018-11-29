#include <iostream>
using namespace std;
void print(int n)
{
	if (n == 0)
		return;
	else
	{
		print(n - 1);
		for (int i = 1; i <= n; i++)
			cout << n;
	}
	cout << endl;
}
int main()
{
	int n;
	cout << "Input a num:";
	cin >> n;
	print(n);
	system("pause");
	return 0;
}