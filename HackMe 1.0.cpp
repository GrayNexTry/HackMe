#include <iostream>
#include <stdlib.h>


static std::string PASS = ")D3g_23Gh";

bool check_passwor(std::string pass){
	for (size_t i = 0; i < PASS.length(); i++)
	{
		if (pass[i] != PASS[i]) return false;
	}
	return true;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	std::string enterLogin;
	std::string enterPass;

	while (true)
	{
		std::cout << "Введите логин:" << "\t";
		std::cin >> enterLogin;
		std::cout << "Введите пароль:" << "\t";
		std::cin >> enterPass;
		if (enterLogin[0] > 54 && enterLogin[0] < 91 && check_passwor(enterPass))
		{
			break;
		}
		else
		{
			system("cls");
			std::cout << "Не верный логин или пароль :(" << "\n";
		}
	}
	std::cout << "Все верно!" << "\n";
	system("PAUSE");
}
