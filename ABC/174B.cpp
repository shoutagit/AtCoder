
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    ll n,d;
    cin >> n >> d;
    ll ans=0;
    for(int i=0; i<n; i++){
        ll x,y;
        cin >> x >> y;
        if(x*x+y*y<=d*d){
            ans ++;
        }
    }
    cout << ans << endl;
}
