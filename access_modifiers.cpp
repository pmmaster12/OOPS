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
    Student(){
    
    }

    Student(int rno,string name ,float gpa ,int age){
        this->rno=rno;
        this->name=name;
        this->gpa=gpa;
        this->age =age;
    }
    void display(){
        cout<<name<<" "<<rno<<" "<<gpa<<" "<<age<<endl;
    }
    void getgpa(){
        cout<<gpa<<endl;    // getter for private privale
    }

    void setgpa(float m){
        gpa =m;    // settetr for private variable 
    }
private:
    float gpa;
    int age;

    
    
};

signed main() {
ios::sync_with_stdio(false); cin.tie(NULL);


Student s1(23,"tarun",2.3,18);
// s1.gpa =3.6;  can't use that setter not be useful for private variable
s1.display(); // getter for private variable
s1.getgpa();  // getter 
s1.setgpa(8.8);
s1.getgpa();
// s1.gpa =8.2 ; //setter for public variable
//s1.age = 23; // setter for public variable

// print ---> tarun 23 1.82044e+033 18044544891354964  ---- garbage valure of private member variable
// in private user can't access and edit the data 
  }
