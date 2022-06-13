#include <iostream>
#include<string>
#include<stack>
#include <math.h>

int operation(int a, int b, char oper)
{
	switch (oper)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	}
	std::cout << "Invalid operator";
	return 0;

}

bool czy_cyfra(char znak)
{
	return znak >= '0' && znak <= '9';
}

bool czy_oper(char znak)
{
	return znak == '+' || znak == '-' || znak == '*' || znak == '/';
}


int str_to_int(std::string a, int& poz)
{
	int liczba = 0;
	while (poz < a.size() && czy_cyfra(a[poz]))
	{

		liczba = liczba * 10 + a[poz] - '0';
		++poz;
	}
	--poz;
	return liczba;
}

