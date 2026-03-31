#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string type;
    int horsepower;
    string plate_number;
    bool has_abs;
    int year;
    string fuel_type;

public:
    Car() {
        type = "Ismeretlen";
        horsepower = 0;
        plate_number = "N/A";
        has_abs = false;
        year = 2000;
        fuel_type = "benzin";
    }

    Car(string type, int hp, string plate, bool abs, int year, string fuel)
        : type(type), horsepower(hp), plate_number(plate), has_abs(abs), year(year), fuel_type(fuel) {}

    Car(const Car& other) {
        type = other.type;
        horsepower = other.horsepower;
        plate_number = other.plate_number;
        has_abs = other.has_abs;
        year = other.year;
        fuel_type = other.fuel_type;
    }

    ~Car() {}

    void setType(string type) { this->type = type; }
    void setHorsepower(int hp) { this->horsepower = hp; }
    void setPlateNumber(string plate) { this->plate_number = plate; }
    void setHasAbs(bool abs) { this->has_abs = abs; }
    void setYear(int year) { this->year = year; }
    void setFuelType(string fuel) { this->fuel_type = fuel; }

    string getType() const { return type; }
    int getHorsepower() const { return horsepower; }
    string getPlateNumber() const { return plate_number; }
    bool getHasAbs() const { return has_abs; }
    int getYear() const { return year; }
    string getFuelType() const { return fuel_type; }

    bool isVintage() const {
        return year < 2010;
    }

    string toString() const {
        return "Típus: " + type + ", Lóerő: " + to_string(horsepower) +
               ", Rendszám: " + plate_number + ", ABS: " + (has_abs ? "Igen" : "Nem") +
               ", Évjárat: " + to_string(year) + ", Üzemanyag: " + fuel_type;
    }

    void compareHorsepower(const Car& other) const {
        if (horsepower > other.horsepower) {
            cout << plate_number << " erősebb mint " << other.plate_number << endl;
        } else if (horsepower < other.horsepower) {
            cout << other.plate_number << " erősebb mint " << plate_number << endl;
        } else {
            cout << "Mindkét autó egyforma lóerővel rendelkezik." << endl;
        }
    }
};

int main() {
    Car c1("E-class", 184, "MRC-001", true, 2005, "dízel");
    Car c2("S-class", 286, "MRC-002", true, 2021, "benzin");

    cout << c1.toString() << endl;
    cout << c2.toString() << endl;

    c1.compareHorsepower(c2);

    return 0;
}
