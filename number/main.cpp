#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int number = 0 + rand() % 100; //�������� ��������� ����� �� 0 �� 100
	int user_number;
	int i = 0;
	cout << "enter you number: ";
	cin >> user_number;
	while (user_number != number) //���� ������� ������������ ����� �� ����������� number, ���� ���� �������������
	{
		i++; //��������, �������� �������� �� ���� �������� �����
		if (user_number > number) //���� ����� ������� ������������ �����, �� ���������� �� ����� �����
			cout << "big number" << endl;
		else if (user_number < number) //���� ����� ������� ������������ ������, �� ���������� �� ����� �����
			cout << "little number" << endl;
		cout << "enter you number: ";
		cin >> user_number;

	}

	cout << "yes, number - " << number << ", choice - " << i << endl; // ���� ����� �������, ���������� �� ����� ����� � ������� �����

	system("pause");
	return 0;
}