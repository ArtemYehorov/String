#include<iostream>
#include <string>
#include<Windows.h>
using namespace std;

int main()
{
	////////////////////////////////////////////// DZ!

	setlocale(0, "ru");
	char* ar = new char[300];
	cout << "Введите предложение на аглийском языке!" << endl;
	cin.getline(ar, 299);

	int Sogl = 0;
	int Glas = 0;
	int Punkt = 0;
	int num = 0;
	int drugie = 0;
	int slov = 0;
	int save_slov = 0;

	for (int i = 0; i < strlen(ar); i++)
	{
		if (ar[i] == 'A' || ar[i] == 'E' || ar[i] == 'I' || ar[i] == 'O' || ar[i] == 'U' || ar[i] == 'a' || ar[i] == 'e' || ar[i] == 'i' || ar[i] == 'o' || ar[i] == 'u')
		{
			Sogl++;
		}
		else if (ar[i] == 'B' || ar[i] == 'C' || ar[i] == 'D' || ar[i] == 'F' || ar[i] == 'G' || ar[i] == 'H' || ar[i] == 'J' || ar[i] == 'K' || ar[i] == 'L' || ar[i] == 'M' || ar[i] == 'N'
			|| ar[i] == 'P' || ar[i] == 'Q' || ar[i] == 'R' || ar[i] == 'S' || ar[i] == 'T' || ar[i] == 'V' || ar[i] == 'W' || ar[i] == 'X' || ar[i] == 'Y' || ar[i] == 'Z'
			|| ar[i] == 'b' || ar[i] == 'c' || ar[i] == 'd' || ar[i] == 'f' || ar[i] == 'g' || ar[i] == 'h' || ar[i] == 'j' || ar[i] == 'k' || ar[i] == 'l' || ar[i] == 'm' 
			|| ar[i] == 'n' || ar[i] == 'p' || ar[i] == 'q' || ar[i] == 'r' || ar[i] == 's' || ar[i] == 't' || ar[i] == 'v' || ar[i] == 'w' || ar[i] == 'x' || ar[i] == 'y' || ar[i] == 'z')
		     {
			      Glas++;
		     }
		else if (ar[i] == ',' || ar[i] == '.' || ar[i] == ';' || ar[i] == ':' || ar[i] == '...' || ar[i] == '!' || ar[i] == '?' || ar[i] == '-' || ar[i] == '(' || ar[i] == ')' 
			|| ar[i] == '"' || ar[i] == '\'')
		     {
			      Punkt++;
		     }
		else if (ar[i] == '1' || ar[i] == '2' || ar[i] == '3' || ar[i] == '4' || ar[i] == '5' || ar[i] == '6' || ar[i] == '7' || ar[i] == '8' || ar[i] == '9' || ar[i] == '0')
		{
			num++;
		}
		else
		{
			drugie++;
		}

	}

	for (int i = 1; i < 300; i++)
	{
		if (ar[i - 1] != ' ' && (ar[i] == ' ' || ar[i + 1] == '\0')) slov++;
	}

	cout << "Всего слов - " << slov << endl << "Всего гласных букв - " << Glas << endl << "Всего согласных - " << Sogl << endl << "Всего знаков пунктуации - " << Punkt << endl << "Всего цифр - " << num << endl << "Других символов - " << drugie << endl;

	cout << "Средняя длинна слова - " << (Glas + Sogl) / slov << endl;

	delete[] ar;

	//////////////////////////////////////////////////////////////////////////////////// ГЕНЕРАЦИЯ ПАРОЛЯ!
	srand(time(0));

	int SIZE;
	cout << endl << "Введите количество символов для пароля!" << endl;
	cin >> SIZE;

	char* par = new char[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		par[i] = char('0' + rand() % 74);
		cout <<"*";
	}
	cout << endl;

	int otv;
	cout << "Показать пароль? - 1 yes,  2 no?" << endl;
	cin >> otv;

	if (otv == 1)
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << par[i];
		}
	}
	else if (otv == 2) cout << "Тогда пока!" << endl;
	Sleep(400);
	exit(0);

}


///////////////////////////////////////////////////////////////////////////////////////// Test String - тестировал стринг

//void ProverkaPorolya(string Password_user, string Login_user);
//
//int ProverkaLogina(const char* Logins[5], string Login_user, int& Trues);
//
//int main()
//{
//	// проверка на нахождения символа
//
//	/*system("title cin.getline, _strcmpi");
//	char* ar = new char[100];
//	string text;
//
//	cin.getline(ar, 99);
//
//	int sum = 0;
//
//	char a;
//	cin >> a;
//
//	for (int i = 0; text[i] != '\0'; i++)
//	{
//		if (a == text[i])
//		{
//			sum++;
//			cout << "index " << i << endl;
//		}
//	}
//	cout << a << " meets - " << sum << endl;*/
//
//	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	const char* Logins[5] = { "Artem","Petya","Vova","Saske","Abobus" };
//	const char* Passwords[5] = { "Pisun","piska228","Vasyalox","PutinXuylo","Idinahuy" };
//
//	string Login_user;
//	string Password_user;
//
//	cout << "Enter Login - ";
//	cin >> Login_user;
//
//	cout << endl;
//
//	cout << "Enter password - ";
//	cin >> Password_user;
//
//	int Trues = 0;
//	ProverkaLogina(Logins, Login_user, Trues);
//	if (Trues == 1)
//	{
//		ProverkaPorolya(Password_user,Login_user);
//	}
//	else
//	{
//		system("cls");
//		cout << "Login incorrect!";
//	}
//}
//
//void ProverkaPorolya(string Password_user, string Login_user)
//{
//	if (Login_user == "Artem" && Password_user == "piska228"|| Login_user == "Petya" && Password_user == "Idinahuy" || Login_user == "Saske" && Password_user == "Pisun"
//				|| Login_user == "Vova" && Password_user == "PutinXuylo" || Login_user == "Abobus" && Password_user == "Vasyalox")
//	{
//		system("cls");
//		cout << "Welcome!";
//   	}
//	else
//	{
//		system("cls");
//		cout << "Password incorrect!";
//	}
//}
//
//int ProverkaLogina(const char* Logins[5], string Login_user,int& Trues)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		if (Login_user == Logins[i])
//		{
//			Trues = 1;
//		}
//	}
//	return Trues;
//}

