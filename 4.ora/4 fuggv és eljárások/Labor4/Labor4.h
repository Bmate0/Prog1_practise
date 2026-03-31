//#pragma once

#ifndef LABOR4_HH
#define LABOR4_HH

// ezek itt csak peldak definiciokra!
/* 
void eljaras1();
void eljaras2();
void eljaras3();
*/

void splitArray(unsigned char *C,unsigned int index, unsigned int maxSize)
{
	unsigned char* C1, *C2 = NULL;
	
	unsigned int sizeofFirstArray = index;
	unsigned int sizeofSecondArray = maxSize - index;
	
	//Elso megoldas: megfogjuk a ket pointerrel a megfelelo indexu elemeket, es kiiratjuk
	
	C1 = &C[0]; //mivel az elso felet vesszuk, mindig az eredeti elso elemet vesszuk.
	C2 = &C[index]; // itt pedig azt az elemet ahonnan feldaraboljuk
	
	for (int i=0;i<sizeofFirstArray;i++){
		std::cout << *C1 << " ";
		++C1;
	}

	std::cout << std::endl;
	for (int i = 0; i < sizeofSecondArray; i++) {
		std::cout << *C2 << " ";
		++C2;
	}
	std::cout << std::endl;
	//Masodik megoldas: adottak a meretek, lefoglaljuk a tomboket, es beleirjuk az ertekeket

	C1 = new unsigned char[sizeofFirstArray];
	C2 = new unsigned char[sizeofSecondArray];

	//Itt egyszeru a helyzet, mert csak a megfelelo indexu elemig masolunk
	for (int i = 0; i < sizeofFirstArray; i++) {
		C1[i] = C[i];
		//std::cout << C1[i] << " ";
	}
	
	//Itt a masodik ciklusnal az index elemtol inditjuk az iterator erteket az eredeti tombben
	//Az uj tombnel azert vonjuk ki az i-t es az elso tomb meretet, mert igy tudjuk nullatol inditani szamozast helyesen.
	//Az eredeti tombnel pedig  az eredeti tomb	megfelelo indexu elemetol inditsuk az indexelest, 
	//es az i-vel noveljuk folyamatosan eggyel ezt az erteket egeszen a tomb utolso elemeig.
	for (int i = sizeofFirstArray; i < maxSize; i++) {
		C2[i - sizeofFirstArray] = C[i];
		//std::cout << C2[i] << " ";
	}
	
	for (int i = 0; i < sizeofFirstArray; i++) {
		std::cout << C1[i] << " ";
	}

	std::cout << std::endl;
	for (int i = 0; i < sizeofSecondArray; i++) {
		std::cout << C2[i] << " ";
	}

	std::cout << std::endl;

	delete[] C2;
	delete[] C1;
}

void clearElement(unsigned char* C, unsigned int index, unsigned int& currentSize)
{
	unsigned char* element = &C[index+1];

	for (int i = index; i < currentSize - 1; ++i) {
		C[i] = *element;
		++element;
	}

	C[currentSize - 1] = '\0';
	currentSize -= 1;

	for (int i = 0; i < currentSize; ++i)
		std::cout << C[i] << " ";

	std::cout << std::endl;

}
#endif