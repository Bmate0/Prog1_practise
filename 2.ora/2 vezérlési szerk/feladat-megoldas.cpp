/*
    - Hozzanak letre egy 1000 meretu tombot, kerjenek be a felhasznalotol szamokat
      -1 ertekig, es a bekert szamok alapjan inkrementaljak a tomb elemeit!
    - Irassanak ki minden otodik elemet!
    - Hozzanak letre egy masik 1000 elemu tobot es minden paros indexu elemet
      masoljanak at az eredeti tombbol!
    - A masodik tomb minden harmadik elemet toltsuk fel -3 es 10 kozotti
      veletlenszeru ertekekkel!
    - A harmadik tombben minden paratlan elemet toltsenek fel tortszamokkal
      10 és 105 között!
    */

#include <iostream>

int main(int argc, char* argv[])
{   
    //Hozzanak letre egy 1000 meretu tombot, kerjenek be a felhasznalotol szamokat
    //-1 ertekig, es a bekert szamok alapjan inkrementaljak a tomb elemeit!

    int szamok[1000] = { 0 };
    int szam;
    int index = 0;
    do {
        std::cout << "Kerek egy szamot: ";
        std::cin >> szam;

        if (szam != -1) {
            //szamok[index] = szam + 1;
            //index += 1;
            szamok[szam] += 1;
        }
    } while (szam !=-1);

    // Irassanak ki minden otodik elemet!

    //elso megoldas
    for (int i = 0; i < 1000; i = i + 5)
    {
        std::cout << szamok[i] << " ";
    }

    //masodik megoldas
    for (int i = 0; i < 1000; i++)
        if (i % 5 == 0) std::cout << szamok[i] << " ";

    //Hozzanak letre egy masik 1000 elemu tobot es minden paros indexu elemet
    //masoljanak at az eredeti tombbol!

    int szamok2[1000] = { 0 };

    for (int i = 0; i < 1000; i = i + 2)
        szamok2[i] = szamok[i];
    
    //A masodik tomb minden harmadik elemet toltsuk fel - 3 es 10 kozotti
    //veletlenszeru ertekekkel!

    for (int i = 0; i < 1000; i = i + 3)
        szamok2[i] = rand() % (10 + 1 + 3) - 3;


    //Egy harmadik 1000 elemû tömböt létrehozva minden paratlan elemet toltsenek fel tortszamokkal
    //10 és 105 között!

    float szamok3[1000] = { 0.0 };

    for (int i=1;i<1000;i=i+2)
    {
        szamok3[i] = rand() / RAND_MAX * (105 - 10) + 10;
    }

    return 0;
}