// Labor3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
int main()
{
    /*
    Deklaráljanak négyfajta typusú változókat,
    és akkor deklaráljanak hozzávaló mutató típusokat is.
    Adjanak minden változónak kezdõértéket a pointerek alkalmazásával,
    és irassák is ki ezeket az értékekekt a konzolba.
    */
	
	int n;
	float f;
	char c;
	bool b;
	
	int* p_n;
	float* p_f;
	char* p_c;
	bool* p_b;
	
	*p_n = 5;
	*p_f = 3.14;
	*p_c = 'a';
	*p_b = true;
	
	std::cout << p_n << " " << p_f << " " << p_c << " " << p_b << std:endl;
	std::cout << *p_n << " " << *p_f << " " << *p_c << " " << *p_b << std:endl;
	
    /*
    deklaráljanak egy statikus tömböt. Egy pointer segítségével töltsék
    fel értékekkel, melyet a felhasználótól olvas be a program.
    */

    int N[10];
    int* p = N;

    for (int i = 0; i < 10; i++)
        std::cin >> p[i];


	//dinamikus memoriafoglalas
    int *A,*B,*C;
    
    A = (int*)malloc(5 * sizeof(int));
    B = (int*)calloc(5, sizeof(int));

    C = new int[5];

	//memoriafelszabaditas
    free(A);
    free(B);
    delete C;
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
