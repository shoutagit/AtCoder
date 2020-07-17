
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
    ll x;
    cin >> x;
    ll ans=0;
    ans += (x/500)*1000;
    x -= (x/500)*500;
    ans += (x/5)*5;

    cout << ans << endl;
   

}