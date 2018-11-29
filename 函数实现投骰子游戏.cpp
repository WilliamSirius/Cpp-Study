#include <iostream>
#include <cstdlib>
using namespace std;

int win = 0, lose = 1, go = 2;
int rollDice()
{
	int num1, num2, diceSum;
	num1 = 1 + rand() % 6;
	num2 = 1 + rand() % 6;
	diceSum = num1 + num2;
	cout << "player rolled:" << num1 << "+" << num2 << "=" << diceSum << endl;
	return diceSum;
}

int main()
{
	int game_result, myPoints;
	int seed;
	cout << "Input random seed(!=0)";
	cin >> seed;
	if (seed == 0)
		return 0;
	srand(seed);
	int sum = rollDice();
	switch (sum)
	{
	case 11:
	case 7:
		game_result = win;
		break;
	case 2:
	case 3:
	case 12:
		game_result = lose;
		break;
	default:
		game_result = go;
		myPoints = sum;
		cout << "Your point:" << myPoints << endl;
		break;
	}
	while (game_result == go)
	{
		sum = rollDice();
		if (sum == myPoints)
			game_result = win;
		else if (sum == 7)
			game_result = lose;
		else
		{
			myPoints = sum + myPoints;
			cout << "your point:" << myPoints << endl;
		}
	}
	getchar();
	return 0;
}
