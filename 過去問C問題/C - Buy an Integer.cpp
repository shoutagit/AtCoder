
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    ll a, b, x;
    cin >> a >> b >> x;
    ll l=0;
    ll r=1000000001;
    auto keta=[&](ll c){
        int res=0;
        while(c){
            c /=10;
            res ++;
        }
        return res;
    };
    auto f = [&](ll c){
        return a*c + b*keta(c);
    };

    while(r-l>1){
        ll c=(l+r)/2;
        if(f(c)<=x) l=c;
        else r = c;
    }
    cout << l << endl;
}