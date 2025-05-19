#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
#define endl '\n' 
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int getRandomNumber(int l, int r) {return uniform_int_distribution<int>(l, r)(rng);}

class Student{
public:
    string name;
    int rno;
    float gpa;
    int age;
    
};
class Car{
public:
    string name;
    int price;
    int seats;
    string type;
    
};
 void print(Car *c){
    cout<<c->name<<" "<<c->price<<" "<<c->seats<<" "<<c->type<<endl;
 }
 void change (Car *c){
    c->name ="tarun";
 }
// void change(Car c){
//     c.name ="Ferrari";
//     c.price=10000000;
//     c.seats= 15;
//     c.type="luxury";
// }
// void change1(Car &c){
//     c.name ="Ferrari";
//     c.price=10000000;
//     c.seats= 15;
//     c.type="luxury";
// }
signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);

  Car c1;
  c1.name ="toyota";
  c1.price=1500000;
  c1.seats=5;
  c1.type="Suv";
  //static allocation of the object 

  int *ptr = new int(5); // dynamic allocation of the memory 
//   cout<<ptr<<endl;
//   cout<<*ptr<<endl;
  Car *ptr1 = new Car();
  ptr1->name = "ferrari";
  ptr1->price =25000;
  ptr1->seats =4;
//   print(ptr1);
cout<<ptr1->type<<endl;
// cout<<12<<endl;
  }
