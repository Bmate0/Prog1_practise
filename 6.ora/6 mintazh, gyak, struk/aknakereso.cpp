#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
	srand(time(NULL));
	bool* aknamezo = nullptr;
	int size = 0;

	std::cout << "aknamezo merete: ";
	std::cin >> size;

	aknamezo = new bool[size*size]();
	int aknak_szama = rand() % (size * size / 2) + (size * size / 2);
	bool firstRun = true;
	int index = 0;
	for (int i = 1; i <= aknak_szama; i++)
	{
		while (aknamezo[index] || firstRun)
		{
			index = rand() % (size * size);
			firstRun = false;
		}
		aknamezo[index] = true;
	}

	int tipp = 0;
	int pontszam = 5;
	while (pontszam && aknak_szama) {
		std::cout << "Aknak szama= "<<aknak_szama<<"\nTipp(pontszam = "<<pontszam<<") : ";
		std::cin >> tipp;

		if (aknamezo[tipp]) {
			pontszam += 10;
			aknak_szama -= 1;
			aknamezo[tipp] = false;
			std::cout << "talált!\n";
		}
		else {
			pontszam -= 1;
			std::cout << "nem talált!\n";
		}
	}

	if (!aknak_szama) {
		std::cout << "nyert!\n" << "pontszám=" << pontszam << std::endl;
	}

	else if (!pontszam)
		std::cout << "elfogytak a pontjai!\n";

	delete[] aknamezo;
	return 0;
}