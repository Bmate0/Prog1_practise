// Labor2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    int b[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            b[i][j] = 5;
        }
    }

    /*
    - Hozzanak letre egy 1000 elemu tombot, es a felhasznalo altal megadott szamok alapjan inkrementaljak a tombelemeket,
    addig amíg -1-et nem olvas be a program.
    - Irassanak ki minden otodik elemet a tombben.
    - Minden paros elemnek adjanak veletlenszeru erteket 0 es 10 kozott!
    - Minden paratlam elemet toltsenek fel -3 es 9 kozotti tortszamokkal!
    */
	
	//-----------MEGOLDAS------------------------
	float N[1000] = {0};
	int number;
	do{
		std::cin >> number;
		N[number] += 1;
		
		
	}
	while(number != -1);
	
	for (int i=0;i<1000;i+=5)
		std::cout << N[i] << std::endl;
	
	for (int i=0;i<1000;i++){
		if (i%3 == 0) N[i] = rand()%(10+1-0))+0;  //rand()(felso ertek+1 - also ertek)+also ertek
	}
	
	for(int i=0;i<1000;i++){
		if(i%2 != 0) N2[i] = (float)rand()/RAND_MAX*(9+1-(-3))-3
	}
    
	//-------------------------------------------------------------------------
	
    int c[1000];
    int n;
    do {
        std::cin >> n;

        if (n == -1) break;
        else c[n] += 1;
    } while (n !=-1);

    while (1)
    {
        std::cin >> n;

        if (n == -1) break;
        else c[n] += 1;
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
