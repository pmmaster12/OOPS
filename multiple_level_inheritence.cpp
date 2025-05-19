
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int getRandomNumber(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }
class vehicle {
    public:
    int topspeed;
    float mileage;
    string fuel;
};

class car : public vehicle{   // single level inheritence
public:
 bool sunroof;
};
class twowheeler : public vehicle{   // single level inheritence
public:

};
class fourwheeler : public vehicle{   // single level inheritence
public:

};
class scooty : public twowheeler{  // multiple level inheritence
public :
};
class bike : public vehicle{ // single level inheritence
public:
};
class truck : public vehicle{  // single level inheritence
public:
};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

}
