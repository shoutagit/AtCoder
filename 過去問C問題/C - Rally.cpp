
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i,n) cin >> x[i];

    ll ans=1e9;
    for(int i=1; i<=100; i++){
        ll sum=0;
        for(int j=0; j<n; j++){
            sum += (x.at(j) - i)*(x.at(j) - i);
        }
        ans = min(ans, sum);
    }

    cout << ans << endl;
}