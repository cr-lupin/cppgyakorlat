Egy ember aki nagyon szeret tv-t nézni, felírta magának, hogy melyik csatornán melyik műsorok érdeklik. Az őt érdeklő műsorok lehet, hogy egy időben vannak, vagy lehet, hogy van időbeni átfedés köztük. Ez az ember ha elkezd nézni egy műsort, akkor azt biztosan végignézni. Írjunk egy programot, amely kiírja, hogy mikor melyik csatornára kell váltania, hogy lehető legtöbb időt tudjon az őt érdeklő műsorok nézésével tölteni.

A fájl amiben az őt érkeklő műsorokat felírta így néz ki:
<1. csatorna neve>
<műsorok száma>
<kezdési idő> <hossz>
<kezdési idő> <hossz>
...
<2. csatorna neve>
<műsorok száma>
<kezdési idő> <hossz>
...
<n. csatorna neve>
<műsorok száma>
<kezdési idő> <hossz>

Az egyszerűség kedvéért a kezdési idő egy egész szám és a műsor hossza ugyanabban a mértékegységben szintén egy egész szám. 

Konkrét példa:
```
TV1
3
10 50
80 30
150 10
TV2
2
5 20
90 80
TV3
3
70 10
120 10
130 10
```

Egy komplexebb példa fájl: [link](https://github.com/cr-lupin/cppgyakorlat/blob/master/gyakorlo_feladatok/tv_bemenet.txt)

