#pragma once
#include <iostream>
#include <string>

class Car2
{
public:
	Car2() = default;
	Car2() {
		this->ev = 0;
		this->rendszam = "";
		this->loero = 0;
	}
	
	Car2(unsigned int e,std::string r,unsigned int l): ev(e), rendszam(r), loero(l) {}
	Car2(unsigned int e=1990, std::string r, unsigned int l) {
		this->ev = e;
		this->rendszam = r;
		this->loero = l;
	}

	Car2(const Car2& c) {
		this->ev = c.ev;
		this->rendszam = c.rendszam;
		this->loero = c.loero;
	}

	~Car2() = default;

	unsigned int getEv() const {
		return this->ev;
	}

	std::string getRendszam() const {
		return this->rendszam;
	}

	unsigned int getLoero() const {
		return this->loero;
	}

	void setEv(unsigned int ev) {
		if (ev > 1890) {
			this->ev = ev;
		}
	}

	void setRendszam(std::string r)
	{
		this->rendszam = r;
	}

	void setLoero(unsigned int l)
	{
		this->loero = l;
	}
private:
	unsigned int ev;
	std::string rendszam;
	unsigned int loero;
};

