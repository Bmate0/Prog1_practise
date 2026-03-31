// Labor4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Labor4.h"

void Eljaras1(int n)
{
    std::cout << "Eljaras1\n";
}

void Eljaras2(int m);

int Negyzet(int n) {
    return n * n;
}

void Eljaras3(int n, int *valtozo)
{
    *valtozo = n;
}

void Eljaras4(int n, int& valtozo)
{
    ;
}

void Eljaras2(int m) {
    std::cout << m << std::endl;
}

void modosit(int* N, int index, int n)
{
    N[index] = n;
}

int main()
{
    int v = 0;
    Eljaras3(3, &v);
    std::cout << v << std::endl;
    std::cout << "Hello World!\n";
    /*
    - Dinamikusan foglaljanak le egy 12 elemû egész tömböt!
    - Töltsék fel -5 és 20 közötti véletlenszerû egész értékekkel!
    - Írjanak egy eljárást, amely a felhasználó által megadott értékkel módosítja a tömb azon
      elemét, amelyet szintén a felhasználó választott ki!
    */

    int* N = new int[12];
    
    for (int i = 0; i < 12; i++)
        N[i] = rand() % (20 + 1 - (-5)) - 5;

    int index, n;
    std::cin >> index;
    std::cin >> n;

    modosit(N,index,n);

    char c = 98;
    
	delete[] N;
    /*
    - Foglaljanak le dinamikusan egy 50 elemû karakter típusú tömböt.
    - Töltsék fel véletlenszerû abc karakterekkel ezt a tömböt eljárás segítségével.
    - A felhasználó által megadott indexnél darabolja fel két másik karaktertömbre az eredeti tömböt
      a szoftver! 
      Függvénnyel és eljárással is megoldhatják!
    - A felhasználó által megadott elemet törölje ki a tömbbõl szoftver!
      Függvénnyel oldják meg ezt is!
    */
	unsigned char *C = new unsigned char[50];
	
	
	for (int i=0;i<50;i++)
	{
		C[i] = rand()%(122+1-97)+97;
        std::cout << C[i] << " ";
	}
	
    std::cout << std::endl;
    //az unsigned kulcszoval csak pozitiv szamokat fogunk letarolni.
    unsigned int element;
    unsigned int currentSize = 50;
    do {
        std::cin >> element;
    } while (element < 50 && !element); //addig olvasunk be szamot, ameddig a jo ertektartomanyba adja meg a felhasznalo erteket.
    splitArray(C, element, 50);
    clearElement(C, element, currentSize);
    clearElement(C, element, currentSize);
    clearElement(C, element, currentSize);

	delete[] C;
    
    return 0;
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
