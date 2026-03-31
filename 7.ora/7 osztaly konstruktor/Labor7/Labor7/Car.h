#pragma once
#include <iostream>
#include <string>

typedef unsigned char byte;

class Car
{
public:
	Car() = default;
	/*
	Car() {
		suly = 0.0;
		ar = 0.0;
		szin = "";
		ajtoszam = 0;
	}
	*/
	~Car() = default;
	//Car(float s, unsigned int a, std::string sz, byte asz) : suly(s), ar(a), szin(sz), ajtoszam(asz) {}
	Car(float s=0.0, unsigned int a=0, std::string sz="fekete", byte asz=4) {
		this->suly = s;
		this->ar = a;
		this->szin = sz;
		this->ajtoszam = asz;
	}

	Car(const Car& c) = default;

	Car(const Car& c) {
		this->suly = c.getSuly();
		this->ar = c.getAr();
		this->szin = c.getSzin();
		this->ajtoszam = c.getAjtoszam();
	}
	float getSuly() const {
		return this->suly;
	}

	unsigned int getAr() const {
		return this->ar;
	}
	
	std::string getSzin() const {
		return this->szin;
	}

	byte getAjtoszam() const {
		return this->ajtoszam;
	}

	void setSuly(float s) {
		this->suly = s;
	}

	void setAr(unsigned int a) {
		this->ar = a;
	}

	void setSzin(std::string sz) {
		this->szin = sz;
	}

	void setAjtokszama(byte n) {
		if (n < 6) {
			this->ajtoszam = n;
		}
	}

private:
	float suly;
	unsigned int ar;
	std::string szin;
	byte ajtoszam;
};

Car A;
Car B(A);


//Készítsék el a Product nevû osztály implementációját!
// Adjanak hozzá tetszõlegesen 4 db tulajdonságot, amely jellemzõ egy webshop termékre!
// Készítsék el a konstruktorokat, és lekérdezõ illetve beállító metódusokat!
//Mutassák be az osztály használatát main-en belül!