#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int number = 0 + rand() % 100; //генеруємо випадкове число від 0 до 100
	int user_number;
	int i = 0;
	cout << "enter you number: ";
	cin >> user_number;
	while (user_number != number) //поки введене користувачем число не відповідатиме number, цикл буде повторюватись
	{
		i++; //рахівник, підраховує увльуість не вірно введених спроб
		if (user_number > number) //якщо число введене користувачем більше, то виводиться на екран запис
			cout << "big number" << endl;
		else if (user_number < number) //якщо число введене користувачем меньше, то виводиться на екран запис
			cout << "little number" << endl;
		cout << "enter you number: ";
		cin >> user_number;

	}

	cout << "yes, number - " << number << ", choice - " << i << endl; // коли число вгадане, виводиться на екран число і кількість спроб

	system("pause");
	return 0;
}