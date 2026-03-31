#include <iostream>
#include <cstdlib>

void lefoglal(int* tomb, int meret)
{
	tomb = new int[meret]();
}

void valogat(int* tomb, unsigned char* karaktertomb, int meret)
{
	unsigned char* karaktertomb = new unsigned char[128]();

	bool betumod = false;
	std::cout << "Kis vagy nagybetû? ";
	std::cin >> betumod;

	int character_counter = 0;
	for (int i = 0; i < meret; i++)
	{
		if (
			tomb[i] >= 65 + (int)betumod * 32 &&
			tomb[i] <= 90 + (int)betumod * 32
			)
		{
			karaktertomb[character_counter] = tomb[i] + (int)betumod * 32;
		}
			
	}
}

void beszur(unsigned char* karaktertomb, unsigned char c, int meret)
{
	bool isExists = false;

	for (int i = 0; i < meret; i++) {
		if (karaktertomb[i] == c) isExists = true;
	}

	//A legegyszerubb ha a vegere beszurjuk, eloszor megkeressuk hol van a vege
	if (!isExists) {
		int lastIndex = 0;
		for (int i = 0; i < meret; i++) {
			if (!karaktertomb[i]) break;
			else lastIndex = i;
		}
		karaktertomb[lastIndex] = c;
	}
}
int main(int argc,char* argv[])
{
	int* tomb = nullptr;
	lefoglal(tomb, 128);

	for (int i = 0; i < 128; i++)
		tomb[i] = rand() % (256);

	
	unsigned char* karaktertomb = nullptr;
	valogat(tomb, karaktertomb, 128);
	
	unsigned char c = 0;
	std::cin >> c;
	beszur(karaktertomb, c,128);

	delete[] karaktertomb;
	delete[] tomb;
	return 0;
}