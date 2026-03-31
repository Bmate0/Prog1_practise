// Labor3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

int main()
{
    /*
    Deklaráljanak négy tetszõleges változót, és hozzanak létre négy darab mutatót is,
    amelyek ezekre a változókra mutatnak!
    Mutatókon keresztül adjanak tetszõleges értéket ezeknek a változóknak!
    Irassák ki külön a mutatókat, illetve a mutatók által hivatkozott értékeket!
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
    Deklaráljanak egy 15 elemû karaktertömböt.
    Töltsék fel a karaktertömböt a felhasználó által megadott értékekkel
    mutató alkalmazásával.
    */
	
	char C[15];
	char* p = C;
	
	for (int i=0;i<15;i++)
		std::cin >> p[i];
	
	for (int i=0;i<15;i++)
		std::cout << p[i];
	
	
    int* p, *p2, *p3;

    p = (int*)malloc(5 * sizeof(int));
    p2 = (int*)calloc(5, sizeof(int));
    p3 = new int[5];

    free(p);
    free(p2);

    delete[] p3;

    
    int n2 = 100;
    int n1 = -20;
    int n = rand() % (n2 + 1 - n1) + n1;
    float f = ((float)rand() / RAND_MAX) * 3;
    std::cout << "Hello World!\n";


    /*
    - Kérjenek be a felhasználótól 10 és 150 közötti értéket. Ezen érték alapján
    foglaljanak le dinamikusan egy egész típusú tömböt.
    - Ezt a tömböt töltsék fel -30 és 120 közötti véletlenszámokkal.
    - Hozzanak létre az elsõ tömhöz képest 
      egy harmadakkora tört típusú dinamikus tömböt. A tömb adott elemeit töltsék fel
      az elsõ tömb értékei alapján úgy, hogy a második tömbbel megegyezõ indexhez képest a szomszédos
      elemeket kiátlagolják az elsõ tömbben.
    */
	
	int sizeofArray = 0;
	
	do {
		std::cout << "Adjon meg 10 es 150 kozotti erteket!\n";
		std::cin >> sizeofArray;
	}
	while( (sizeofArray< 10) || (sizeofArray>150) );
	
	int* N = (int*)calloc(sizeofArray,sizeof(int));
	
	for(int i=0;i<sizeofArray;i++){
		N[i] = rand()%(120+1+30)-30;
	}
	
	int sizeofSecondArray = sizeofArray/3;
	float* F = (float*)calloc(sizeofSecondArray,sizeof(float));
	
	//itt is tobbfajta megoldas letezik, ez csak az egyiket mutatja be.
	for(int i=0;i<sizeofSecondArray;i++){
		/*
		Itt kiszamitjuk az elso tomb indexet az alabbiak alapjan:
		- mindig harmas csoportokra osztjuk fel az elso tombot.
		- az i*3-mal leptetjuk a csoportokat, tehat a legelso iteracioban a 0,1,2 indexu elemeket tartalmazo csoport lesz
		  utana pedig a 3,4,5 egeszen a tomb vegeig.
		- vesszuk a kozepso elemet, ezt jelenti a plusz hozzadas a vegen.
		*/
		firstIndex = (i*3)+1;
		
		F[i] = ( 
		    (float)N[firstIndex-1) +
			(float)N[firstIndex]   + 
			(float)N[firstIndex+1] ) 
			/ 3 );
	}
	
	free(F);
	free(N);
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
