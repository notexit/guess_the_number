#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int number = 0 + rand() % 100; //генеруємо випадкове число від 0 до 100
	int user_number;
	int i = 0;
	cout << "Приветствую в игре Угадай число"<< endl;
	cout << "Бот вам загадал число. Введите число: ";
	cin >> user_number;
	while (user_number != number) //поки введене користувачем число не відповідатиме number, цикл буде повторюватись
	{
		i++; //рахівник, підраховує увльуість не вірно введених спроб
		if (user_number > number) //якщо число введене користувачем більше, то виводиться на екран запис
			cout << "Число большое" << endl;
		else if (user_number < number) //якщо число введене користувачем меньше, то виводиться на екран запис
			cout << "Число маленькое" << endl;
		cout << "Введите число: ";
		cin >> user_number;

	}
	cout << "Да, загадуемое число - " << number << ", попыток - " << i << endl; // коли число вгадане, виводиться на екран число і кількість спроб
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

	cout << "Бот угадал ваше число " << user_number << " за "<<  a << "попыток"<< endl;

	if (a < i) {
		cout << "Бот испытал на "<<i - a <<" меньше попыток угадать ваше число"<< endl;
	}
	else {
		cout << "Вы испытали на " << a - i << " меньше попыток угадать ваше число" << endl;
	
	}
	
	system("pause");
	return 0;
}