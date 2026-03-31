#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string type;
    int horsepower;
    string plate_number;
    bool has_abs;

public:
    // Alapértelmezett konstruktor
    Car() {
        this->type = "Ismeretlen";
        this->horsepower = 0;
        this->plate_number = "N/A";
        this->has_abs = false;
    }

    // Paraméteres konstruktor
    Car(string type, int hp, string plate, bool abs) {
        this->type = type;
        this->horsepower = hp;
        this->plate_number = plate;
        this->has_abs = abs;
    }

    // Másoló konstruktor
    Car(const Car& other) {
        this->type = other.type;
        this->horsepower = other.horsepower;
        this->plate_number = other.plate_number;
        this->has_abs = other.has_abs;
    }

    // Destruktor
    ~Car() {
        // cout << "Destruktor meghívva: " << plate_number << endl;
    }

    // Set metódusok
    void setType(string type) { this->type = type; }
    void setHorsepower(int hp) { this->horsepower = hp; }
    void setPlateNumber(string plate) { this->plate_number = plate; }
    void setHasAbs(bool abs) { this->has_abs = abs; }

    // Get metódusok
    string getType() { return this->type; }
    int getHorsepower() { return this->horsepower; }
    string getPlateNumber() { return this->plate_number; }
    bool getHasAbs() { return this->has_abs; }

    // Kiíró metódus
    void print() {
        cout << "Típus: " << this->type
             << ", Lóerő: " << this->horsepower
             << ", Rendszám: " << this->plate_number
             << ", ABS: " << (this->has_abs ? "Igen" : "Nem") << endl;
    }
};

int main() {
    Car auto1;
    Car auto2("SUV", 150, "ABC-123", true);
    Car auto3 = auto2;

    auto1.setType("Sedan");
    auto1.setHorsepower(120);
    auto1.setPlateNumber("XYZ-789");
    auto1.setHasAbs(false);

    auto1.print();
    auto2.print();
    auto3.print();

    return 0;
}
