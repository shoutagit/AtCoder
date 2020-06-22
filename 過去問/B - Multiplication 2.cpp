
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;


const ll MX=1e18;
int main(){
    int n;
    cin >> n;
    ll ans =1;
    bool ok=false;

    rep(i,n){
        ll a;
        cin >> a;
        if(a==0){
            cout << 0 << endl;
            return 0;
        }
        //aをかけても10^18を超えないなら
        //そのままa*ansをするとオーバーフローしてしまうのでMX/ansと比較する
        else if(a <= MX/ans){
           ans *= a;
        }
        else{
            ok = true;
        }
    }
    if(ok) cout << -1 << endl;
    else cout << ans << endl;
    return 0;

   

}