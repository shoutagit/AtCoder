
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()


int main(){
    int n; cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a.at(i);

    int ans=0;
    while(true){
        rep(i,n){
            if(a.at(i) % 2 == 1){
                cout << ans << endl;
                return 0;
            }
        }
        rep(i,n){
            a.at(i) /= 2;
        }
        ans ++;
    }
}