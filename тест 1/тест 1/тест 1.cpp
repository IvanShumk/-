# include<iostream>
# include<string.h>

using namespace std;

class Account
{
	char name[20];
	string CODE;
	char actype[4];
	float balance;
	int index;
public:
	Account()
	{
		cout << "Программа запущена!" << endl;
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
	cout << "Введите имя держателя счёта : " << endl;
	cin.get(name, 19, ' ');
	cout << "Введите тип счёта :" << endl;
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
	cout << " Ожидаемая прибыль: " << interest << " руб." << endl;
}
void Account::display_details()
{
	cout << "<< Информация о счёте >>" << endl << endl << endl;
	cout << " Владелец счёта         :  " << name << endl;
	cout << " Код управляющего офиса :  " << CODE << endl;
	cout << " Почтовый индекс        :  " << index << endl;
	cout << " Тип счёта              :  " << actype << endl;
	cout << " Баланс                 :  " << balance << " руб." << endl;
}

int main(void)
{
	setlocale(LC_ALL, "Russian");
	Account obj;

	int choice = 1;
	while (choice != 0)
	{
		cout << "\nВыберите требуемую опцию:" << endl;
		cout << "Введите:  0. Выход  1. Открыть счёт  2. Внесение средств  3. Вывод средств  4. Расчёт процентов  5. Информация о счёте" << endl << "...";
		cin >> choice;
		switch (choice)
		{
		case 0:obj.display_details();
			cout << "ОТКЛЮЧЕНИЕ!";
			break;
		case 1: obj.setdata();
			break;
		case 2: obj.deposit();
			break;
		case 3: obj.withdraw();
			break;
		case 4: obj.calculate_interest();
			break;
		case 5: obj.display_details();
			break;
		default: cout << " ОШИБКА  ОШИБКА  ОШИБКА  ОШИБКА  ОШИБКА  ОШИБКА  ОШИБКА  ОШИБКА  ОШИБКА " << endl;
			break;
		}
	}
	return 0;
}







































//cout << "Выберите номер счёта: " << endl;