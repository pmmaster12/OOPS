#include <bits/stdc++.h>
using namespace std;
using namespace chrono;


#define endl '\n'


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int getRandomNumber(int l, int r) {
    return uniform_int_distribution<int>(l, r)(rng);
}

class Student {
public:
    string name;
    int rno;

    Student() {}

    Student(int rno, string name) {
        this->rno = rno;
        this->name = name;
    }

    Student(string name) {
        this->name = name;
    }

    Student(int rno) {
        this->rno = rno;
    }

    void sum(int a, int b) {
        cout << a + b << endl;
    }

    void sum(double a, double b) {  // Changed from float to double
        cout << a + b << endl;
    }

    void sum(string a, string b) {
        cout << a + b << endl;
    }

    void sum(int a, int b, int c) {  // Fixed typo from sun to sum
        cout << a + b + c << endl;
    }
};

class scooty{
public:
    int topspeed;
    float mileage;
    virtual void display() {
        cout<<"dhoom dhoom"<<endl;
    }

};
class bike : public scooty { // single level inheritence similar to extends in java {
public:
   int gear;
    void display() {
        cout<<"vroom dhoom"<<endl;      // same methord in both child and parent classs
    }

};

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Student s1(23, "tarun");
    Student s2;
    s1.rno = 24;
    s1.name = "aditya";
    Student s3(12);
    Student s4("prasanna");

    s1.sum(2, 3); // + operator for integer additon
    s1.sum(2.5, 3.5); // + operator for double addition
    s1.sum("tarun", " aditya"); // + operator for string concatenation  


    scooty* c1 =new bike();

    c1->display(); // method overriding

    scooty* c2 = new scooty();
    c2->display(); 

    bike* c3 = new bike();
    c3->display(); 
    

    return 0;
}
