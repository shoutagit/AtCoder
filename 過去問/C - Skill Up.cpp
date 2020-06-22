
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()


int a[12][12];
const int INF = 1001001001;

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);

    rep(i,n){
        cin >> c[i];
        rep(j,m){
            cin >> a[i][j];
        }
    }
    
    //全探索するしかないらしい
    //ビット全探索 1<<nは2^n
    int ans=INF;
    rep(s, 1<<n){
        int cost=0;
        vector<int> d(m); //理解度
        rep(i,n){
            //sをi回右シフトするとsのiビット目が1の位にくる
            //&1とすることでsのiビット目が立っている時だけ実行できる
            if(s>>i & 1){
                cost += c[i];
                rep(j,m) d[j] += a[i][j];
            }
            bool ok = true;
            rep(j,m) if(d[j] < x) ok = false;
            if(ok) ans = min(ans, cost);
        }

    }
    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;

}