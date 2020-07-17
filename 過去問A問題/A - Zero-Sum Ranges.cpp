
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
   int n; cin >> n;
   vector<ll> a(n);
   rep(i,n) cin >> a[i];

    //累積和
    vector<ll> sum(n+1);
    rep(i,n){
        sum.at(i+1) = sum.at(i) + a.at(i);
    }

    //sumの値が同じになるペアが求めたい区間になる
    map<ll,ll> nums;
    rep(i,n+1) nums[sum[i]] ++;

    //集計処理
    ll ans=0;
    for(auto it:nums){
        ll num = it.second; //it.firstがit.second個ある
        ans += num*(num-1)/2;  //nC2  例えばsum[i]=3が4箇所あったら選び方は4C2になる
    }
    cout << ans << endl;
}