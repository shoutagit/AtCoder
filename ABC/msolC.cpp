
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    for(int i=0; i<n-k; i++){
        if(a[i]>=a[i+k]){
            cout << "No" << endl;
        }
        else cout << "Yes" << endl;
    }
}