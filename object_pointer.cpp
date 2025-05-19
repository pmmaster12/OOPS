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
 void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
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
 Student s1;
  s1.name="tarun";
  s1.rno=59;
  s1.gpa=8.5;
  s1.age=21;
  Student s2;
  s2.name="aditya";
  s2.rno=8;
  s2.gpa=8;
  s2.age=21;

  cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<" "<<s1.age<<endl;
  cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<" "<<s2.age<<endl;

  Car c1;
  c1.name ="toyota";
  c1.price=1500000;
  c1.seats=5;
  c1.type="Suv";
  
  Car c2;
  c2.name ="Honda city";
  c2.price=1600000;
  c2.seats=4;
  c2.type="Hatchback";
  Car c3;
  c3.name ="indica";
  c3.price=600000;
  c3.seats=7;
  c3.type="SUV";

// traditional way of printing objects
// adhoc process
// cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
// // cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;
// print(c2);

// print(c3);

int x =4;
cout<<x<<endl;
cout<<&x<<endl;
int *ptr = &x;
cout<<ptr<<endl;
cout<<*ptr<<endl;   //dereferencing of pointer
*ptr = 5;
cout<<x<<endl;


Car *ptr1 = &c1;
cout<<ptr1->name<<endl;
cout<<(*ptr1).name<<endl;
(*ptr1).name = "ferrari";
cout<<(*ptr1).name<<endl;
ptr1->name = "audi";
cout<<(*ptr1).name<<endl;
change(ptr1);
cout<<ptr1->name;
}