Vector
======

```cpp
#include <vector>
```

Létrehozása
-----------

```cpp
std::vector<int> v1;
std::vector<int> v2(5);
std::vector<int> v3(5,42);
std::vector<int> v4(v2);
std::vector<int> v5(v2.begin(), v2.end());

std::vector<int> v6 = {1,2,3,4,5}; // Csak C++11
```

Használata:
-----------

```cpp
v.size();
v[0], ..., v[v.size()-1];
v.push_back(n);
v.pop_back();
v.front();
v.back();
v.clear();
v = v2;
```

Átadása paraméterként:
```cpp
void f(std::vector<int> v); // másol, a v változtatása NEM változtatja meg a bemenő paraméter értékét 
void g(std::vector<int>& v); // nem másol, a v változtatása megváltoztatja a bemenő paraméter értékét 
void h(const std::vector<int>& v); // nem másol, nem lehet v-t változtatni
```