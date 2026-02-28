#include <iostream>
#include <string>

using namespace std;

struct Nap {
    string nev;
    string ebredesi_ido;
};

int main() {
    Nap het[7] = {
        {"Hétfő", "06:30"},
        {"Kedd", "06:30"},
        {"Szerda", "06:30"},
        {"Csütörtök", "06:30"},
        {"Péntek", "06:30"},
        {"Szombat", "08:00"},
        {"Vasárnap", "08:30"}
    };

    cout << "Ébredési idők:\n\n";

    for (int i = 0; i < 7; i++) {
        cout << het[i].nev << " - " << het[i].ebredesi_ido << endl;
    }

    return 0;
}