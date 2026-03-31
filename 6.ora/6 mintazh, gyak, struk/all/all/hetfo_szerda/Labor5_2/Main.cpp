#include <iostream>
#include <cstdlib>

// 1. Készítsenek egy eljárást, amely egy 128 méretû karakter
// típusú tömböt fog lefoglalni dinamikusan!

void lefoglal(char*& tomb,int meret)
{
	tomb = (char*)calloc(sizeof(char), meret);
}

// 2. Készítsenek egy eljárást, amely a 
// tömb elsõ 20 páratlan elemét
// magánhangzókkal, és minden elsõ 20 páros elemét pedig
// mássalhangzókkal fogja feltölteni!

void feltolt(char*& tomb, int meret)
{
	char mgh[5] = { 'a','e','i','o','u' };
	char msh[20] = { 'b','c','d','f','g','h','j','k','l','m'};

	for (int i = 1; i < 40; i += 2) {
		int index = rand() % 5;
		tomb[i] = mgh[index];
	}

	for (int i = 0; i < 40; i += 2) {
		int index = rand() % 10;
		tomb[i] = msh[index];
	}
}

// 3. Készítsenek egy eljárást, amely a tömb második felét
// véletlenszerû karakterekkel tölti fel!

void feltolt2(char*& tomb, int meret)
{
	for (int i = meret / 2; i < meret; i++)
	{
		int value = rand() % (90 + 1 - 65) + 65;
		tomb[i] = value;
	}
}

// 4. Készítsenek egy függvényt, amely megszámolja
// a mássalhangzók számát!

int msh_darab(char*& tomb, int meret)
{
	char msh[21] = { 'b','c','d','f','g','h','j','k','l','m',
		'n','p','q','r','s','t','v','w','x','y','z'};

	int db = 0;
	for (int i = 0; i < meret; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			if (tomb[i] == msh[j]) db += 1;
		}
	}

	return db; 
}

// 5. Készítsenek egy eljárást, amely minden magánhangzót
// a második 128 méretû dinamikusan lefoglalt tömbbe fog átmásolni!
void mgh_copy(char*& C, int meret, char*& D, int meret2)
{
	char mgh[5] = { 'a','e','i','o','u' };

	int index = 0;
	for (int i = 0; i < meret; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (C[i] == mgh[j]) {
				D[index] = mgh[j]; //= C[i];
				index += 1;
			}
		}
	}
}

// 6. Készítsenek egy eljárást, amely rendezi növekvõ sorrendbe
// a korábban átmásolt magánhangzókat!

void rendezes(char*& D, int meret2)
{
	for (int i = 0; i < meret2; i++)
	{
		for (int j = 1; j < meret2; j++) {
			if (D[j] < D[i]) {
				int s = D[j];
				D[j] = D[i];
				D[i] = s;
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
	char* D = nullptr;
	lefoglal(C, 128);
	lefoglal(D, 128);
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

