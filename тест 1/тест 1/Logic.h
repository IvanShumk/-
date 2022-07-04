#pragma once
# include<iostream>
# include<string.h>
using namespace std;
class Account
{
	char name[20];
	int acno;
	string CODE;
	char actype[4];
	float balance;
	int index;
public:
	Account()
	{
		cout << "Программа запущена!" << endl;
		acno = 0000;
		balance = 0.0;
		CODE = "RUS-29564732-1294-X";
		index = 126573;
	}
	void setdata();
	void deposit();
	void withdraw();
	void calculate_interest();
	void display_details();
};

void Account::setdata()
{
	cout << "<< Открытие счёта >>" << endl;
	cout << "Введите имя держателя счёта : ";
	cin.get(name, 19, '0');
	cout << "Выберите номер счёта: " << endl;
	cin >> acno;
	cout << "Введите идентификатор счёта " << endl;
	cin >> actype;
	cout << "Введите начальный баланс : " << endl;
	cin >> balance;
}
void Account::deposit()
{
	float more;
	cout << "<< Внесение средств >>" << endl;
	cout << "  Введите количество вносимых средств: ";
	cin >> more;
	balance += more;
	cout << "\n Ваш баланс:" << balance << endl;
}
void Account::withdraw()
{
	float amt;
	cout << "<< Перевод >>" << endl;
	cout << "  Введите количество выводимых средств : ";
	cin >> amt;
	if (amt > balance)
	{
		cout << "\n На счёте недостаточно средств!" << endl;
	}
	else
	{
		balance = balance - amt;
		cout << "\nВаш баланс: " << balance << " руб." << endl;
	}
}
void Account::calculate_interest()
{
	int t;
	int perc;
	float interest;
	cout << " Введите срок вклада (в днях):  ";
	cin >> t;
	cout << " Введите процентную ставку (годовую):  ";
	cin >> perc;
	interest = balance * perc * t / (36500);
	cout << " Ожидаемая прибыль: " << interest << endl;
}
void Account::display_details()
{
	cout << "<< Информация о счёте >>" << endl;
	cout << " Владелец счёта         :  " << name << endl;
	cout << " Номер счёта            :  " << acno << endl;
	cout << " Код управляющего офиса :  " << CODE << endl;
	cout << " Почтовый индекс        :  " << index << endl;
	cout << " Тип счёта              :  " << actype << endl;
	cout << " Баланс                 :  " << balance << " руб." << endl;
}


