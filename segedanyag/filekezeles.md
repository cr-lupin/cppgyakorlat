Fájlkezelés
===========

```cpp
#include <fstream>

std::istream ifs("input.txt"); // megnyitjuk olvasásra
std::ofstream ofs("output.txt"); // megnyitjuk írásra

int x;

ifs >> x; // beolvasunk egy számot (int-et) a fájlból

ofs << (x + 2); // kiírjuk a kifejezés értékét a fájlba.

ifs.close();
ofs.close(); //fájl bezására

ifs.eof(); // igaz, ha az előző olvasás meghiúsult, mert elértük a fájl végét
ifs.good(); // igaz, ha az előző olvasás sikeres volt
