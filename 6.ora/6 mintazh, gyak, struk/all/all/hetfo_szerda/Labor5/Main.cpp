#include <iostream>
#include <cstdlib>

// 1. Készítsenek egy eljárást, amely egy 128 méretû karakter
// típusú tömböt fog lefoglalni dinamikusan!

void tombFoglalas(char*& tomb)
{
	tomb = new char[128];
}

// 2. Készítsenek egy eljárást, amely a tömb elsõ 20 páratlan
// elemét magánhangzókkal, és minden elsõ 20 páros elemét pedig
// mássalhangzókkal fogja feltölteni!

void tombFeltoltes(char*& tomb)
{
	char mgh[5] = { 'a','e','i','o','u' };
	char msh[20] = { 'b','c','d','f','g','h','j','k','l' };

	for (int i = 1; i <= 40; i += 2)
	{
		int index = rand() % 5;
		tomb[i] = mgh[index];

		int index_msh = rand() % 9;
		tomb[i - 1] = msh[index_msh];
	}
}

// 3. Készítsenek egy eljárást, amely a tömb második felét
// véletlenszerû karakterekkel tölti fel!

void maradekFeltolt(char*& tomb) {
	for (int i = 40; i < 128; i++)
	{
		tomb[i] = 'a' + rand() % 26;
	}
}

// 4. Készítsenek egy függvényt, amely megszámolja
// a mássalhangzók számát!

int msh_szam(char*& tomb)
{
	int szamlalo = 0;

	for (int i = 0; i < 128; i++) {
		if (!(
			tomb[i] == 'a' || 
			tomb[i] == 'e' ||
			tomb[i] == 'i' ||
			tomb[i] == 'o' ||
			tomb[i] == 'u' 
			))
			szamlalo += 1;
	}

	return szamlalo;
}

// 5. Készítsenek egy eljárást, amely minden magánhangzót
// a második 128 méretû dinamikusan lefoglalt tömbbe fog átmásolni!

void mgh_masol(char*& tomb,char*& dest)
{
	int index = 0;
	for (int i = 0; i < 128; i++)
	{
		if (
			tomb[i] == 'a' ||
			tomb[i] == 'e' ||
			tomb[i] == 'i' ||
			tomb[i] == 'o' ||
			tomb[i] == 'u'
			)
		{
			dest[index] = tomb[i];
			index += 1;
		}
			
	}
}

// 6. Készítsenek egy eljárást, amely rendezi növekvõ sorrendbe
// a korábban átmásolt mássalhangzókat!

void rendez(char*& tomb)
{
	for (int i = 0; i < 127; i++) {
		for (int j = 0; j < 127; j++) {
			if (tomb[i] > tomb[j]) {
				char temp = tomb[j];
				tomb[j] = tomb[i];
				tomb[i] = temp;
			}
		}
	}
}

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

int main(int argc, char* argv[])
{
	char* C = nullptr;
	char* mgh_tomb;


	tombFoglalas(C);
	tombFoglalas(mgh_tomb);

	if (C) delete[] C;
	if (mgh_tomb);
	return 0;
}

/*
1. Készítsenek egy eljárást, amely egy 128 méretû karakter
   típusú tömböt fog lefoglalni dinamikusan!
2. Készítsenek egy eljárást, amely a tömb elsõ 20 páratlan elemét
   magánhangzókkal, és minden elsõ 20 páros elemét pedig
   mássalhangzókkal fogja feltölteni!
3. Készítsenek egy eljárást, amely a tömb második felét
   véletlenszerû karakterekkel tölti fel!
4. Készítsenek egy függvényt, amely megszámolja
   a mássalhangzók számát!
5. Készítsenek egy eljárást, amely minden magánhangzót
   a második 128 méretû dinamikusan lefoglalt tömbbe fog átmásolni!
6. Készítsenek egy eljárást, amely rendezi növekvõ sorrendbe
   a korábban átmásolt mássalhangzókat!

*/