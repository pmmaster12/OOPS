#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int getRandomNumber(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }

// class Student
// {
// public:
//   string name;
//   int rno;
//   float gpa;
//   int age;
//   Student(string s, int r, float gp)
//   {
//     name = s;
//     rno = r;
//     gpa = gp;
//   }
// };
class Car
{
public:
  string name;
  int price;
  int seats;
  string type;

  Car(string name, int price, int seats, string type)
  {
    this->name = name;
    this->price = price;
    this->seats = seats;
    this->type = type;
  } // paramaterized constructor
//   Car()
//   {

//   } // default constructor

//   Car(string n, int p)
//   {
//     name = n;
//     price = p;

//   } // multiple constructor
//   // paramaterized constructor
//   Car(int p, string n)
//   {
//     name = n;
//     price = p;

//   } // multiple constructor
    // paramaterized constructor
};
// void print(Student c)
// {
//   cout << c.name << " " << c.rno << " " << c.gpa << " " << c.age << endl;
// }
void print1(Car c)
{
  cout << c.name << " " << c.price << " " << c.seats << " " << c.type << endl;
}
// void change(Car &c)
// {
//   c.name = "let's see";
// }
signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  //  Student s1;
  //   s1.name="tarun";
  //   s1.rno=59;
  //   s1.gpa=8.5;
  //   s1.age=21;
  //   Student s2;
  //   s2.name="aditya";
  //   s2.rno=8;
  //   s2.gpa=8;
  //   s2.age=21;
//   Student s1("tarun", 59, 8.5);
//   s1.age = 21;
//   s1.rno = 23;
//   // overriding attribute
  // print(s1);

  Car c1("suv", 1500000, 5, "sedan");
  Car c2("honda city",12000000,5,"luxury");

  cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
  cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;
//   Car c2;
//   c2.name = "mercedes";
//   c2.price = 140000;
//   c2.seats = 8;
//   c2.type = "lux";

//   // print1(c1);
//   // print1(c2);

// //   Car c3("haas", 14444444444);
// //   c3.seats = 8;
// //   c3.type = "good";
// //   print1(c3);
//   Car c4("haas", 1323232323, 8, "suv");
//   print1(c4);
//   Car c5(22424242424, "maclaren");
//   c5.seats = 2;
//   c5.type = "suv";
//   print1(c5);


// //   Student s6 = s1; // copy constructor
// //                    // deep copy similar to (pass by value)
// //   s6.name = "manish";
// //   print(s1);
// //   print(s6);
// //   // s6-> s1 s6 is deep copy of s1 changes in s6 does not reflect in s1

// //   Student s7(s1); // copy constructor which recieve object of same class
// //                   // it is also a deep copy
// //   print(s7);
//   s7.name = "ayush";
//   print(s7);
//   print(s1);
//   Car c8 = c3; // copy constructor deep copy
//   cout << "see shallow copy" << endl;
//   print1(c8);
//   change(c8);
//   print1(c8);
//   print1(c3);
  // still ha deep copy
  // shallow copy can we achieve using pointer and shared pointer
}
