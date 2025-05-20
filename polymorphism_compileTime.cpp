#include <bits/stdc++.h>
using namespace std;
using namespace chrono;


#define endl '\n'
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

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

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Student s1(23, "tarun");
    Student s2;
    s1.rno = 24;
    s1.name = "aditya";
    Student s3(12);
    Student s4("prasanna");

    s1.sum(2, 3);
    s1.sum(2.5, 3.5);
    s1.sum(2,3,4);  // double call is now valid

    return 0;
}
