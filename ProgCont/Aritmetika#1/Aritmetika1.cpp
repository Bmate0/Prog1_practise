#include <iostream>
using namespace std;

int main() {
    /*
        n -> tesztesetek száma
        x, y -> két egész szám
        op -> művelet karaktere (+, -, *, /)
    */
    int n;
    cout << "Hány műveletet szeretnél elvégezni? ";
    cin >> n;
    cout << "Oké! Összesen" << n << "db műveletet fogok elvégezni.\n Írd le az elvégezendő számítást szóközzel elválasztva" << endl;
    int x, y;
    char op;
    
    /* 
    Előszor végigfut a for ciklus, majd növeli i értékét 1-gyel, 
    és újra lefuttatja a ciklusmagot, amíg i el nem éri n értékét.
    */
    for(int i = 0; i < n; ++i) {
        cin >> x >> op >> y;

        switch(op) {
            case '+':
                cout << x + y << endl;
                break;
            case '-':
                cout << x - y << endl;
                break;
            case '*':
                cout << x * y << endl;
                break;
            case '/':
                if(y == 0) {
                    cout << "Hiba: nullával nem lehet osztani!" << endl;
                } else{
                    cout << x / y << endl;
                }
                break;
            case '%':
                if(y == 0) {
                    cout << "Hiba: modulo nulla" << endl;
                } else {
                    cout << x % y << endl;
                }
                break;
            default:
                cout << "Hiba: ismeretlen művelet!" << endl;
        }
    }


}
