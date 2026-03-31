#include "Product.h"

Product::Product() {
	this->category = rand() % 3;
	this->quantity = rand() % (20 + 1 - 1) + 1; /// 1 es 20 kozott valtozik a mennyisege
	this->price = rand() % (100000 + 1 - 1000) + 1000; ///az ar 1000 es 100000 kozott lesz

	this->id[0] = rand() % (90 + 1 - 65) + 65;
	this->id[1] = rand() % (90 + 1 - 65) + 65;
	this->id[2] = '-';

	for (int i = 3; i < 3 + 6; i++)
		this->id[i] = rand() % (57 + 1 - 48) + 48;

	unsigned int interval_numbers = 57 + 1 - 48;
	unsigned int interval_characters = 90 + 1 - 65;

	for (int i = 9; i < 11; i++) {
		unsigned int value = rand() % (interval_numbers + interval_characters);

		if (value <= interval_numbers) this->id[i] = value + 48;
		else                           this->id[i] = value + 65;
	}

	this->id[12] = '\0';
}