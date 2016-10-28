Mátrix
======

A C++ szabványos könyvtárában nincs mátrix implementáció. Azonban vektorok vektorából könnyen tudunk mátrixot készíteni. 

1. példa: egész számokat tartalmazó 5 x 5-ös mátrix
---------------------------------------------------

```cpp
std::vector< std::vector<int> > matrix(5, std::vector<int>(5));
```

A külső vektornak öt eleme van, amelyek öt elemű int-eket tartalmazó vektorok.
Arra figyeljünk, hogy a definícióban a két záró kacsacsőr közé tegyünk egy space-t, mert ha nem tesszük, akkor a fordítóprogram azt a beolvasásnál is használt dupla kacsacsőr operátornak tekinti és fordítási hibát ad.

A mátrix elemeinek indexelése dupla szögletes zárójellel történik, pl.

```cpp
matrix[1][2] = 42;
```

2. példa: nem tudjuk előre mekkora mátrixra lesz szükségünk
-----------------------------------------------------------

Vektorok vektora esetén is létrehozhatunk egy üres adatszerkezetet és majd push_back-ekkel belepakoljuk az elemeket.

A következő példában, létrehozzuk az alábbi mátrixot.

```
11 12 13 14 15
21 22
31 32 33
```

```cpp
std::vector< std::vector<int> > m; // Üres mátrix

m.push_back(std::vector<int>()); // beszúrtunk egy üres vektort (1x0-ás mátrixunk van most)
m[0].push_back(11);
m[0].push_back(12);
m[0].push_back(13);
m[0].push_back(14);
m[0].push_back(15); // megvan az első sor (1x5-ös mátrix)

m.push_back(std::vector<int>()); // beszúrjuk a következő sort
m[1].push_back(21);
m[1].push_back(22);

m.push_back(std::vector<int>()); 
m[2].push_back(31);
m[2].push_back(32);
m[2].push_back(33);

// az érvényes indexek pedig:
m[0][0] m[0][1] m[0][2] m[0][3] m[0][4]
m[1][0] m[1][1]
m[2][0] m[2][1] m[2][2]
```