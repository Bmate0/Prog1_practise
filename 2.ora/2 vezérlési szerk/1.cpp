// Labor2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

int main()
{
    int valtozo = 5;

    while (valtozo) {
        --valtozo;
    }

    do {
        --valtozo;
    } while (valtozo);

    std::cout << "Hello World!\n";

    int a[100];
    for (int i=0;i<100;i++)
    {
        a[i] = i;
    }

    int b[5][100][3];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 100; j++) {
            for (int k = 0; k < 3; k++) {

            }
        }
    }

    /*
    - van egy 1000 elemû tömb. Felhasznátóól beolvassuk az indexeket majd inkrementálunk.
    - kiirunk minden otodik elemet.
    - létrehozunk egy másik 1000 elemû tömböt (nincs feltöltve nullával),
      és minden páros elemet átmásolunk az eredeti tömbbõl
    */

    int n = 0;
    int A[1000];
    bool voltErtek = false;

    std::cin >> n;
    A[n] += 1;
    do {
        if (voltErtek)
            A[n] += 1;
        
        std::cin >> n;

        if (!voltErtek) voltErtek = true;
    } while (n != -1);
    
    int N2[1000];
	
	for(int i=0;i<1000;i++){
		if (i%2 ==0) N2[i] = N[i];
	}
	
	
    while (1) {
        std::cin >> n;

        if (n == -1) break;
        A[n] += 1;
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
