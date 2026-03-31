#pragma once
typedef unsigned int egeszAdat;
typedef bool         funkciok;

class Car
{
public:
	Car(egeszAdat sz=0, egeszAdat l=0) : szin(sz), loero(l) {}
protected:
	egeszAdat szin;
	egeszAdat loero;
};

class Mercedes : public Car {
public:
	Mercedes(egeszAdat sz, egeszAdat l, funkciok s) {
		this->szin = sz;
		this->loero = l;
		this->savkovetes = s;
	}
private:
	funkciok savkovetes;
};

class Audi : public Car {
public:
	Audi(egeszAdat sz, egeszAdat l, funkciok a,funkciok t) {
		this->szin = sz;
		this->loero = l;
		this->abs = a;
		this->tempomat = t;
	}
private:
	funkciok abs;
	funkciok tempomat;
};

