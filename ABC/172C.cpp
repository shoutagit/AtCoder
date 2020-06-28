
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    int ans=0;
    ll acount=0;
    ll bcount=0;
    while(true){
        if(acount==n && bcount ==m){
            cout << n+m << endl;
            return 0;
        }
        else if(a[acount]<=b[acount] || bcount==m){
            k -= a[acount];
            if(k<0) break;
            acount ++;
        }
        else if(a[acount]>b[bcount] || acount==n){
            k-= b[bcount];
            if(k<0) break;   
            bcount ++;
        }
    }
    cout << acount+bcount << endl;


}