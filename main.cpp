#include <iostream>
#include<string>
#include<stack>
#include "source.h"



int main()
{
	std:: string ONP;

	std::cout << "Enter the expression written in reverse Polish notation ";
	getline(std::cin, ONP);
	std:: stack<int> stos;
	int a, b;

	
	for (int i = 0; i < ONP.size(); i++)
	{
		if (czy_cyfra(ONP[i]))
			stos.push((str_to_int(ONP, i)));
		else
			if (czy_oper(ONP[i])) 
			{
				if (stos.size() < 2)
				{
					std::cout << "Incorrect expression";
					return 0;
				}
				a = stos.top();	
				stos.pop();	
				b = stos.top();	
				stos.pop();
				stos.push(operation(b, a, ONP[i])); 
			}
	}
	
	if (stos.size() != 1)
	{
		std::cout << "Incorrect expression";
		return 0;
	}
	std::cout << "" << ONP << " : " << stos.top();
	return 0;
}

