#include <iostream>
using namespace std;


int main() {
    /*
        x, y -> két egész szám
        op -> művelet karaktere (+, -, *, /)
    */
    cout << "EOF-ig fut a program. (CTRL + C)\n"
            "Írd le az elvégezendő számítást szóközzel elválasztva"<< endl;
    int x, y;
    char op;
    
    /* 
    Előszor végigfut a for ciklus, majd növeli i értékét 1-gyel, 
    és újra lefuttatja a ciklusmagot, amíg i el nem éri n értékét.
    */
    while(cin >> x >> op >> y) {

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
