
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }


int main(){
    int n; cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a.at(i);

    vector<ll> accum(n+1); //累積和
    accum.at(0) = 0;
    for(int i=1; i<n+1; i++){
        accum.at(i) = accum.at(i-1) + a.at(i-1);
    }
    //連続するi個の区画を選んだときの最大値
    for(int i=1; i<=n; i++ ){
        ll ans=0;
        //jはスタート位置を表す
        for(int j=0; j<n-i+1;j++){
            ans = max(ans,(accum.at(j+i)-accum.at(j)));
        }
        cout << ans << endl;
    }
    return 0;

}