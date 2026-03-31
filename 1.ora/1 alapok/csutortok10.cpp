#include <iostream>

using namespace std;
int main()
{
	int n;
	cout << "Hello";
	std::cin >> n;

	std::cout << n << std::endl;

	//karakter valtozo

	/*
	t�bbsoros
	komment
	*/

	char c = 'a';
	int i = 50;
	float f = 3.24;
	bool b = true;

	unsigned char uc;
	short int si;

	/*
	alapmuveletek gyakorlasa
	*/

	int n1, n2, n3, n4;
	n1 = 2;
	n2 = 3;
	n3 = 4;
	n4 = 5;

	std::cout << n1 + n2 << " "
		<< n2 - n3 << " "
		<< n3 * n4 << " "
		<< n4 % n1 << " "
		<< std::endl;
	return 0;

	int na[100]; //t�mb, array

	na[5] = 20; //nullatol indul a szamozas

	char o;
	std::cin >> o;

	if (o == '+')
	{
		;
	}
	else if (o == '-')
	{
		;
	}
	else {
		;
	}

	switch (o)
	{
	case '+': {
		std::cout << "p";
		break;
	}
	case '-': {
		std::cout << "n";
		break;
	}
	default:
		std::cout << "k";
	}
}
