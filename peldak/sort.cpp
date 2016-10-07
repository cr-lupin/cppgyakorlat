#include <iostream>

int max(int* t, int size)
{
  int mi = 0;
  for (int i = 1; i < size; ++i)
  {
    if (t[i] > t[mi])
      mi = i;
  }
  return mi;
}

void swap(int& a, int& b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

void max_sort(int* t, int size) 
{
  for (int i = 0; i < size - 1; ++i)
  {
    int maxi = max(t, size - i);
    swap(t[maxi], t[size - i - 1]);
  }
}

int main()
{
  int t[] = {3,2,8,4,7,9,1,6,0,5};
  int s = sizeof(t) / sizeof(t[0]);
  max_sort(t, s);
  for (int i = 0; i < s; ++i) 
  {
    std::cout << t[i] << " ";
  }
  std::cout << std::endl;
}

