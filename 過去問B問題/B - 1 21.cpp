
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()


int main(){
    string  a, b;
    cin >> a >> b;
    ll n = stoi(a+b);
    ll x = sqrtl(n);
    if(x*x == n){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

}