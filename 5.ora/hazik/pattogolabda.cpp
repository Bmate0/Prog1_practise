#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    int x = 0;
    int y = 0;

    int dx = 1;
    int dy = 1;

    while (true) {

        system("cls"); // képernyő törlése

        // lejjebb visszük az O-t
        for (int i = 0; i < y; i++) {
            cout << endl;
        }

        // jobbra visszük az O-t
        for (int i = 0; i < x; i++) {
            cout << " ";
        }

        cout << "O";

        // pozíció frissítése
        x = x + dx;
        y = y + dy;

        // falról visszapattanás
        if (x <= 0 || x >= 70) {
            dx = -dx;
        }

        if (y <= 0 || y >= 20) {
            dy = -dy;
        }

        Sleep(50); // sebesség

    }

    return 0;
}