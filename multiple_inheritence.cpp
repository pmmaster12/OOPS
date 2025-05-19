#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int getRandomNumber(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }
class Cricketer
{
public:
    int runs;
    float average;
    int wicket;
protected:
   float economy;
};
class enginner
{
public:
    int experience;
    string domain;
};

class extraordinary : public Cricketer, public enginner
{ // multiple inheritence
public:
    string name;
    int age;
    extraordinary(){
        economy =0;
    }
    void seteconomy(float m){
        economy =m;          // setter funtion for private variable 
    }
    void geteconomy(){
        cout<<economy<<endl;  // getter function for private variable 
    }
};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    extraordinary v1;
    v1.name = "tarun";
    v1.domain = "sde3";
    v1.wicket = 243;
    v1.geteconomy();
    v1.seteconomy(6.7);
    v1.geteconomy();

    
}
