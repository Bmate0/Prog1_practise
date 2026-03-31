#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
	int* tomb = (int*)calloc(sizeof(int), 100);

	for (int i = 0; i < 100; i++)
	{
		tomb[i] = rand() % 256;
	}

	int index = 0, value = 0;

	do {
		std::cin >> index >> value;

		if ((index != -1 && value != -1) && 
			(value >=0 && value <100)) {
			float n = (float)rand() / RAND_MAX;

			if (n <= 0.29) {
				tomb[index] = value;
			}
		}
	} while (index != -1 && value != -1);
	return 0;

	int index_2 = 0;
	char karakterek[100];
	for (int i = 0; i < 100; i++)
	{
		if (tomb[i] >= 32 && tomb[i] <= 126) {
			std::cout << tomb[i];
			karakterek[index_2] = tomb[i];
			index_2 += 1;
		}
	}
}