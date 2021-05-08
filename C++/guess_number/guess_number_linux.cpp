#ifdef PLATFORM_WIN
#include "stdafx.h"
#endif

#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int number = 0 + rand() % 100; //генеруємо випадкове число від 0 до 100
	int user_number;
	int i = 0;
	cout << "Вітаю в грі Угадай число"<< endl;
	cout << "Вам загадали число. Введіть число: ";
	cin >> user_number;
	while (user_number != number) //поки введене користувачем число не відповідатиме number, цикл буде повторюватись
	{
		i++; //рахівник, підраховує увльуість не вірно введених спроб
		if (user_number > number) //якщо число введене користувачем більше, то виводиться на екран запис
			cout << "Число велике" << endl;
		else if (user_number < number) //якщо число введене користувачем меньше, то виводиться на екран запис
			cout << "Число маленьке" << endl;
		cout << "Введіть число: ";
		cin >> user_number;

	}
	cout << "Так, число яке загадали - " << number << ", спроб - " << i << endl; // коли число вгадане, виводиться на екран число і кількість спроб
	cout << "Загадайте число боту :";
	
	cin >> user_number;
	int a = 0;
	int one=0;
	int two = 100;
	bool game = true;
	while (game) {
		a++;
		int number1 =one + rand() % (two - one);
		if (number1 == user_number) {
			game = false;
		}
		else if (number1 < user_number) {
			one = number1;
		}
		else if (number1 > user_number)
		{
			two = number1;
		}
		
	}

	cout << "Бот вгадав число " << user_number << " за "<<  a << " спроб"<< endl;

	if (a < i) {
		cout << "Бот вгадав число на "<<i - a <<" менше спроб"<< endl;
	}
	else {
		cout << "Ви вгадали на " << a - i << " менше спроб" << endl;
	
	}
	
	system("pause");
	return 0;
}