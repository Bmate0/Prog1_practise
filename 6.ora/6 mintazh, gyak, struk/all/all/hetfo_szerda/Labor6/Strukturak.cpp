/*
	Implementaljanak egy eljarast, amely egy termek strukturat
	megkapva parameterkent, feltolti az egyes adatelemeit!
	A termek strukturanak definialjanak tetszolegesen harom
	jellemzot
*/

/*
	Hozzanak létre egy 10 elemû Termek tipusu strukturat
	dinamikusan lefoglalva.
	Készítsenek egy függvényt, amely visszatér a termékek átlag-
	árával!
*/
#include <iostream>

struct Termek {
	double suly;
	int ar;
	char marka[20];
};

void init_Termek(Termek* T)
{
	std::cout << "Suly: ";
	std::cin >> T->suly;

	std::cout << "Ar: ";
	std::cin >> T->ar;

	strncpy(T->marka, "Milfina", 20);
}

double compute_mean(Termek* T,int meret)
{
	double atlag = 0;
	for (int i = 0; i < meret; i++)
		atlag += T[i].ar;

	return atlag / meret;
}

int main(int argc, char* argv[])
{
	Termek T;
	init_Termek(&T);

	Termek T2[10];
	// termekek feltoltese
	for (int i = 0; i < 10; i++)
		T2[i].ar = rand() % 9000 + 1000;
	std::cout << compute_mean(T2);
	return 0;
}