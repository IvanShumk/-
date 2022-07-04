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
		cout << "��������� ��������!" << endl;
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
	cout << "<< �������� ����� >>" << endl;
	cout << "������� ��� ��������� ����� : ";
	cin.get(name, 19, '0');
	cout << "�������� ����� �����: " << endl;
	cin >> acno;
	cout << "������� ������������� ����� " << endl;
	cin >> actype;
	cout << "������� ��������� ������ : " << endl;
	cin >> balance;
}
void Account::deposit()
{
	float more;
	cout << "<< �������� ������� >>" << endl;
	cout << "  ������� ���������� �������� �������: ";
	cin >> more;
	balance += more;
	cout << "\n ��� ������:" << balance << endl;
}
void Account::withdraw()
{
	float amt;
	cout << "<< ������� >>" << endl;
	cout << "  ������� ���������� ��������� ������� : ";
	cin >> amt;
	if (amt > balance)
	{
		cout << "\n �� ����� ������������ �������!" << endl;
	}
	else
	{
		balance = balance - amt;
		cout << "\n��� ������: " << balance << " ���." << endl;
	}
}
void Account::calculate_interest()
{
	int t;
	int perc;
	float interest;
	cout << " ������� ���� ������ (� ����):  ";
	cin >> t;
	cout << " ������� ���������� ������ (�������):  ";
	cin >> perc;
	interest = balance * perc * t / (36500);
	cout << " ��������� �������: " << interest << endl;
}
void Account::display_details()
{
	cout << "<< ���������� � ����� >>" << endl;
	cout << " �������� �����         :  " << name << endl;
	cout << " ����� �����            :  " << acno << endl;
	cout << " ��� ������������ ����� :  " << CODE << endl;
	cout << " �������� ������        :  " << index << endl;
	cout << " ��� �����              :  " << actype << endl;
	cout << " ������                 :  " << balance << " ���." << endl;
}


