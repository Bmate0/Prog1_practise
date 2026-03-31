// Labor8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

typedef unsigned int egeszAdat;
typedef bool         funkciok;

class Mercedes {
public:
    //Mercedes() = default; //alapertelmezett konstruktor a fordito altal
    
    //par soros definicio eseten a headerbe irhatjuk meg, elso verzio
    //------------------------------------------------------------------------
    /*Mercedes(egeszAdat l, egeszAdat sz, funkciok f, egeszAdat k) {
        this->loero = l;
        this->szin = sz;
        this->savkovetes = f;
        this->kerekmeret = k;
    }*/
    //------------------------------------------------------------------------
    //par soros definicio eseten a headerbe irhatjuk meg, masodik verzio
    //------------------------------------------------------------------------
    Mercedes(egeszAdat l=0, egeszAdat sz=0, funkciok f=false, egeszAdat k=0) : loero(l), szin(sz), savkovetes(f), kerekmeret(k) {}
    Mercedes(const Mercedes& M) = default;
    ~Mercedes() = default;

    egeszAdat getLoero() const {
        return this->loero;
    }

    egeszAdat getSzin() const {
        return this->szin;
    }

    funkciok getSavkovetes() const {
        return this->savkovetes;
    }

    egeszAdat getKerekmeret() const {
        return this->kerekmeret;
    }

    void setLoero(egeszAdat l) {
        this->loero = l;
    }

    void setSzin(egeszAdat sz) {
        this->szin = sz;
    }

    void setSavkovetes(funkciok f) {
        this->savkovetes = f;
    }

    void setKerekmeret(egeszAdat k) {
        this->kerekmeret = k;
    }

    Mercedes& operator = (const Mercedes& M) {
        this->loero = M.getLoero();
        this->szin = M.getSzin();
        this->savkovetes = M.getSavkovetes();
        this->kerekmeret = M.getKerekmeret();

        return *this;
    }

private:
    egeszAdat loero;
    egeszAdat szin;
    funkciok savkovetes;
    egeszAdat kerekmeret;
};

class Audi {
public:
    Audi(egeszAdat l = 0, egeszAdat sz = 0, funkciok a = false, funkciok t = false) {
        this->loero = l;
        this->szin = sz;
        this->abs = a;
        this->tempomat = t;
    }
    Audi(const Audi& A) = default;

    egeszAdat getLoero() const {
        return this->loero;
    }

    egeszAdat getSzin() const {
        return this->szin;
    }

    funkciok getAbs() const {
        return this->abs;
    }

    funkciok getTempomat() const {
        return this->tempomat;
    }

    void setLoero(egeszAdat l) {
        this->loero = l;
    }

    void setSzin(egeszAdat sz) {
        this->szin = sz;
    }

    void setAbs(funkciok a) {
        this->abs = a;
    }

    void setTempomat(funkciok t) {
        this->tempomat = t;
    }

    Audi& operator = (const Audi& A) {
        this->loero = A.getLoero();
        this->szin = A.getSzin();
        this->abs = A.getAbs();
        this->tempomat = A.getTempomat();
    }
private:
    egeszAdat loero;
    egeszAdat szin;
    funkciok abs;
    funkciok tempomat;
};

int main()
{
    Mercedes M();
    Mercedes M2 = M();
    Mercedes M3;
    M3 = M2;

    Audi A,A3;
    Audi A2(Audi());

    A = A3;
    std::cout << A.getLoero();
    std::cout << "Hello World!\n";

    //
    // 1. Deklaráljanak egy Audi osztályt a Mercedes osztály mintájára, és 
    //    szintén 4-5 jellemzõt definiáljanak mellé 
    //    (2 jellemzõ lehet ugyanaz mint a Mercedesnél)
    // 2. Deklarálják hozzá a megfelelõ konstruktorokat, és a main-ben példányosítva
    //    mutassák be a mûködésüket!
    // 3. Készítsék el a lekérdezõ illetve beállító metódusokat is, a mainbe mutassák be,
    //    hogy mûködnek!
    // 4. Készítsék el a hozzátartozó egyenlõség operátor definióját is!
    //
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
