
//累積和が初めて一発で解けた
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }


int main(){
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a.at(i);

    vector<ll> accum(n+1);
    accum.at(0) = 0;
    for(int i=1; i<n+1; i++){
        accum.at(i) = accum.at(i-1) + a.at(i-1);
    }
    ll ans=0;
    for(int i=0; i<n-k+1; i++){
        ans += accum.at(k+i) - accum.at(i);
    }
    cout << ans << endl;

}