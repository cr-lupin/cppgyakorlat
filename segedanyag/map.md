`Map<key_t, value_t>`
=====================

```cpp
#include <map>
```

A map adatszerkezet kulcs-érték párok tárolására szolgál, amelyen hatékony módon tudunk a kulcsokra keresni.

Példa a használatára:

```cpp
std::map<std::string, int> honap;

honap["jan"] = 31;
honap["feb"] = 28;
honap["mar"] = 31;
honap["apr"] = 30;

std::cout << honap["jan"];

++honap["feb"];

std::cout << honap["feb"];
```

Ha érvénytelen kulccsal indexeljük, akkor beszúr az adott kulcshoz egy alapértelmezett értéket. Az alapértelmezett érték számok esetén a `0`, logikai érték esetén a false, felhasználói típus esetén pedig a default konstruktorral létrehozott elem. Tehát az alábbi példában 0 íródik ki, mivel még nem állítottuk be a `honap` változóban a májust.

```cpp
std::cout << honap["maj"];
```

Egy kulcs létezésének eldöntése
-------------------------------

A `find` tagfüggvény segítségével tudunk kulcsra keresni. Ez a függvény egy iterátort ad vissza a keresett kulcs-érték párra, ha az benne van a map-ben, és `end` iterátorral tér vissza ha nincs.

```cpp
std::map<std::string, int>::iterator it = honap.find("jun");
if (it != honap.end()) 
{
  std::cout << "megtalaltam a juniust";
}
```

Ha az iterátorra amúgy nincs szükségünk, akkor elég ennyit is írni:

```cpp
if (honap.find("jun") != honap.end()) 
{
  std::cout << "megtalaltam a juniust";
}
```

Az iterátor által hivatkozott elem
----------------------------------

Az iterátor egy kulcs-érték párra hivatkozik, ami egy `std::pair<key_t, value_t>` típusú elem. Az `std::pair`-nak két adattagja van a `first` és a `second`. A `first` mindig a kulcsot a `second` pedig az értéket tartalmazza.

Példa a map elemeinek kiíratására
---------------------------------

```cpp
for (std::map<std::string, int>::iterator it = honap.begin(); it != honap.end(); ++it) 
{
  std::cout << "kulcs: " << (*it).first << " ertek: " << (*it).second << std::endl;
}
```

Az értékek elérését a pointereknél is használt egyszerűbb formában is megtehetjük:


```cpp
for (std::map<std::string, int>::iterator it = honap.begin(); it != honap.end(); ++it) 
{
  std::cout << "kulcs: " << it->first << " ertek: " << it->second << std::endl;
}
```

