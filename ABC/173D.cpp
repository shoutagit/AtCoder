
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    //降順にソート
    sort(all(a),greater<int>());

    //1人目の心地よさは0
    ll ans=0;
    //2人目の心地よさはa[0]
    ans += a[0];
    //3人目以降
    for(int i=2; i<n; i++){
        ans += min(a[i-2],a[i-1]);
    }
}