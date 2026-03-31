/*
Feladat:
 1. Írjanak egy függvényt, amely két stringet kap meg
	a paraméterként méretekkel együtt, és visszatér
	igaz értékkel, hogy ha a második string megtalálható
	az elsõben.
 2. Írjanak egy eljárás, amely két stringet kap meg
	paraméterként a méretekkel együtt, és kitörli
	a második string karaktereit az elsõ stringbõl.
	(karaktertömbökkel valósítsák meg)
	A beépített C stílusú eljárások és
	fv-ek nélkül oldják meg!

*/

#include <iostream>
#include <cstdlib>

// 1. Írjanak egy függvényt, amely két stringet kap meg
// a paraméterként méretekkel együtt, és visszatér
// igaz értékkel, hogy ha a második string megtalálható
// az elsõben.

int getStrHossz(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i += 1;
	}

	return i;
}

int megtalalhato(char* C, char* C2)
{
	int hossz_1 = getStrHossz(C);
	int hossz_2 = getStrHossz(C2);
	
	if (hossz_2 > hossz_1) return -1;
	
	int pozicio = 0;
	for (int i = 0; i <= hossz_1 - hossz_2; i++)
	{
		pozicio = 0;
		for (int j = 0; j < hossz_2; j++)
		{
			if (C[i + j] == C2[j])
			{
				if (!j) pozicio = i;
				if (j == hossz_2 - 1) return pozicio;
			}

			else break;
		}
	}

	return -1;
}

// 2. Írjanak egy eljárás, amely két stringet kap meg
// paraméterként a méretekkel együtt, és kitörli
// a második string karaktereit az elsõ stringbõl.
// (karaktertömbökkel valósítsák meg)
// A beépített C stílusú eljárások és
// fv - ek nélkül oldják meg!

void torles(char* C1, int meret, char* C2, int meret2)
{
	while (megtalalhato(C1, C2) != -1)
	{	
		int i = 0;
		for (i = megtalalhato(C1, C2) + getStrHossz(C2); i < getStrHossz(C1); i++)
		{
			C1[i - getStrHossz(C2)] = C1[i];
		}

		C1[i - getStrHossz(C2)] = '\0';
	}
}

int main(int argc, char* argv[])
{
	return 0;
}