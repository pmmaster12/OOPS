#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int getRandomNumber(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }

class Vector
{
public:
   int size;
   int capacity;
   int *arr;

   Vector()
   {
      size = 0;
      capacity = 1;
      arr = new int[1];
   }

   void push(int ele)
   {
      if (size == capacity)
      {
         capacity *= 2;
         int *arr2 = new int[capacity];
         for (int i = 0; i < size; i++)
         {
            arr2[i] = arr[i];
         }
         arr = arr2;
      }
      arr[size] = ele;
      size++;
   }

   int get(int ind)
   {
      if (size == 0 || ind < 0 || ind >= size)
         return -1;
      return arr[ind];
   }
   void remove()
   {
      size--;
   }
   void print()
   {
      for (int i = 0; i < size; i++)
      {
         cout << arr[i] << " ";
      }
      cout << endl;
   }
};
void print_outside(int *arr, int size)
{
   for (int i = -0; i < size; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}
signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   Vector v1;
   cout << v1.size << " " << v1.capacity << endl;
   v1.push(3);
   cout << v1.size << " " << v1.capacity << endl;

   v1.push(5);
   cout << v1.size << " " << v1.capacity << endl;
   v1.push(6);
   cout << v1.size << " " << v1.capacity << endl;
   v1.print();
   v1.remove();
   cout << v1.size << " " << v1.capacity << endl;
   v1.print();
   v1.push(56);
   v1.push(23);
   v1.push(445);
   cout << v1.size << " " << v1.capacity << endl;
   v1.print();
   print_outside(v1.arr, v1.size);
}
