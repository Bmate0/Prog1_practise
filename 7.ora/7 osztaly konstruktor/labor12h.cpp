#include <iostream>
#include <cstdlib>

#define FEKETE 0
#define FEHER 1
#define KEK 2

#define NAME_SIZES 32
class Auto {
public:
	//konstruktorok

	//ures kontruktor sajat implementacio
	Auto() {
		for (int i = 0; i < NAME_SIZES; i++) {
			this->marka[i] = 0;
			this->tipus[i] = 0;
		}

		this->loero = 0;
		this->fogyasztas = 0;
		this->csomag = nullptr;
	}

	//ures konstruktor automatikusan
	Auto() = default;

	//parameteres konstruktor
	Auto(
		char* m,
		char* t,
		int l=4,
		double f=5.64,
		int cs=NAME_SIZES
	)
	{
		for (int i = 0; i < NAME_SIZES; i++) {
			this->marka[i] = m[i];
			this->tipus[i] = t[i];
		}

		this->loero = l;
		this->fogyasztas = f;

		this->csomag = new int[cs];
		this->csomag_meret = cs;
	}

	//masolo konstruktor
	Auto(const Auto& A)
	{
		for (int i = 0; i < NAME_SIZES; i++) {
			this->marka[i] = A.marka[i];
			this->tipus[i] = A.tipus[i];
		}

		this->loero = A.loero;
		this->fogyasztas = A.fogyasztas;
		this->csomag_meret = A.csomag_meret;
		this->csomag = new int[this->csomag_meret];

		for (int i = 0; i < this->csomag_meret; i++)
			this->csomag[i] = A.csomag[i];
	}

	Auto(const Auto& A) = default;

	~Auto() {
		if (csomag) delete[] csomag;
	}

	~Auto() = default;

	int getLoero() const {
		return this->loero;
	}

	void setLoero(int l) {
		this->loero = l;
	}
private:
	char marka[NAME_SIZES];
	char tipus[NAME_SIZES];
	int loero;
	double fogyasztas;
	int* csomag;
	unsigned int csomag_meret;
};

/*
struct Auto
{
	void initValues()
	{
		this->loero = 5;
	}
	void kiir()
	{
		std::cout << "Marka: " << marka
			<< "Típus: " << tipus
			<< "Loero: " << loero
			<< "fogyasztas:" << fogyasztas << std::endl;
	}

	void tuning(int pluszLE)
	{
		loero += pluszLE;
		fogyasztas += ceil(fogyasztas / 10.0) * 0.3;
	}
	char marka[32];
	char tipus[32];
	int loero;
	double fogyasztas;
};
*/


int main(int argc, char* argv[])
{
	Auto A;
	
	std::cout << A.marka;
	//std::cin >> A.marka >> A.tipus >> A.loero >> A.fogyasztas;

	//kiir(A);
	//tuning(A, 15);
	//kiir(A);

	return 0;
}