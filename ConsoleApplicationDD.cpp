#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
		setlocale(LC_ALL, "RUSSIAN");

	struct data
	{
		char last_name[30];		unsigned int salary;	 short int  yob;	string post;
	};

		const int n = 8;

	data Workers[n] =
	{
		{"Иванов", 12000, 1999, "Стажер"},
		{"Сохин", 35500 , 1987 , "Cистемный инженер"},
		{"Куликова", 67000, 1991, "Системный программист"},
		{"Гордеев", 86000, 1979, "Специалист по ИБ"},
		{"Соболев", 57000, 1985, "Архитектор БД"},
		{"Антонов", 34000, 2000, "Системный Администратор"},
		{"Степанов", 76000, 1986, "Администратор Сайта"},
		{"Суханова", 45000 , 1998 , "HR-менеджер"}
	};

	long int fund = 0;

		cout << setw(108.5) << "Информация о работниках\n\n";

		cout << setw(15) << "Фамилия" << setw(15) << "Оклад" << setw(35) <<"Год рождения" << setw(35) << "Должность" << "\n\n";

	for (size_t i = 0; i < n; i++)
	{
		cout << setw(15) << Workers[i].last_name << setw(15) << Workers[i].salary << setw(35) << Workers[i].yob << setw(35) << Workers[i].post << "\n\n";

		fund += Workers[i].salary;
	}

	cout << "\n\nФонд заработной платы : " << fund << "\n\n";



	return 0;
}
