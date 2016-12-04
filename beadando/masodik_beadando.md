Második beadandó, utazástervezés
================================

Írj utazástervező programot, amely két állomás között megadja a legkevesebb átszállást igénylő útvonalat.
A vonatok.txt tartalmazza a vonatok útvonalát az alábbo módon:
- Minden sor egy vonathoz tartalmaz információt.
- A sor elején a vonat neve található, majd utána white-space-ekkel elválasztva az állomások, ahol megáll
- A vonat visszafelé irányban is ugyanezeken az állomásokon áll meg
- Egy sor tetszőlegesen sok állomásnevet, a fájl pedig tetszőleges számú sort tartalmazhat
- Az egyszerűség kedvéért a fájlban ékezetek nélük szerepelnek az állomásnevek

A program olvassa be a kiinduló és a célállomás nevét, majd írja ki, az útvonalat (vonat nevét amivel elkezdjük az utazást, illetve hol és milyen vonatra kell átszállni). 
pl: Székesfehérvárról Szegedre akarunk utazni, akkor a program kimenete valami hasonló lehet:
indulás: Székesfehérvár G43
átszállás: Kőbánya-Kispest TISZAVIRÁG-IC
érkezés: Szeged

(Értelemszerűen lehet ékezetek nélkül kiírni, hiszen a bemeneti fájlban is úgy van)

Ha több útvonalon is meg lehet oldani az utazást minimális átszállásal, akkor a program bármelyiket választhatja.
pl: Székesfehérvár Kelenföld viszonylaton mindegy, hogy a G43-as vagy a Z30-as vonatot adja vissza a program.

példa fájl: [link](https://github.com/cr-lupin/cppgyakorlat/blob/master/beadando/vonat.txt)

