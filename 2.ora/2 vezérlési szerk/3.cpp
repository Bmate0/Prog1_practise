// Labor2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    int a[5][4];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = 5;
        }
    }

    int a[1000] = { 0 };

    /*
    - Hozzanak letre egy 1000 meretu tombot, kerjenek be a felhasznalotol szamokat -1 ertekig, es a bekert szamok alapjan
    inkrementaljak a tomb elemeit!
    - Irassanak ki minden otodik elemet!
    - Hozzanak letre egy masik 1000 elemu tobot es minden paros indexu elemet masoljanak at az eredeti
      tombbol!
    - A masodik tomb minden harmadik elemet toltsuk fel -3 es 10 kozotti veletlenszeru ertekekkel!
    - A masodik tombben minden paratlan elemet toltsenek fel tortszamokkal 10 és 105 között!
    */

    /*
    Hozzanak létre egy 10 elemû karaktertömböt, majd töltsék fel kisméretû betûkkel! 
    (ASCII 97-122 között van az értéktartomány)
    */
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
