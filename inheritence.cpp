
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int getRandomNumber(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }

class scooty
{
public:
    int topspeed;
    float mileage;

private:
    int bootspace;
};
class bike : public scooty{  // single level inheritence similar to extends ina java 
                          // derived class (child class) : parent class 
public:
    int gear;
    

};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    bike b1;
    b1.gear=2;
    b1.topspeed =45;
    b1.mileage=22.3;
    // b1.bootspace=4;  as private variable

}
