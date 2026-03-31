// Labor2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";

	int a[5][4];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			a[i][j] = 5;
		}
	}

	int a[1000] = { 0 };

	/*
	- Hozzanak letre egy 1000 meretu tombot, kerjenek be a felhasznalotol szamokat -1 ertekig, es a bekert szamok alapjan
	inkrementaljak a tomb elemeit!
	- Irassanak ki minden otodik elemet!
	- Hozzanak letre egy masik 1000 elemu tobot es minden paros indexu elemet masoljanak at az eredeti
	  tombbol!
	- A masodik tomb minden harmadik elemet toltsuk fel -3 es 10 kozotti veletlenszeru ertekekkel!
	- A masodik tombben minden paratlan elemet toltsenek fel tortszamokkal 10 �s 105 k�z�tt!
	*/

	int N[1000] = { 0 };
	int number;
	int counter = 0;
	do {
		std::cin >> number;
		N[counter] = number;

		if (counter < 1000) {
			counter += 1;
		}

	} while (number != -1);

	for (int i = 0; i < 1000; i += 5)
		std::cout << N[i] << std::endl;

	float N2[1000] = { 0 };

	//ez csak egyetlen megoldas a sok verzio kozul, barmelyik masik elfogadhato
	for (int i = 0; i < 1000; i++) {
		if (i % 2 == 0) N2[i] = N[i];
	}

	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0) N2[i] = rand() % (10 + 1 - (-3)) + (-3);  //rand()(felso ertek+1 - also ertek)+also ertek
	}

	for (int i = 0; i < 1000; i++) {
		if (i % 2 != 0) N2[i] = (float)rand() / RAND_MAX * (105 + 1 - 10) + 10
	}

	/*
	Hozzanak l�tre egy 10 elem� karaktert�mb�t, majd t�lts�k fel kism�ret� bet�kkel!
	(ASCII 97-122 k�z�tt van az �rt�ktartom�ny)
	*/

	unsigned char C[10];

	for (int i = 0; i < 10; i++) {
		C[i] = rand() % (122 + 1 - 97) + 97;
		std::cout << C[i] << " ";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file