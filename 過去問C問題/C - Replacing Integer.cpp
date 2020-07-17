
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
        ll n, k;
        cin >> n >> k;
        ll ans=n;

        if(n >= k){
            ans = n%k;
        }
        //一旦n%kになったらそのあとは2つの値の繰り返しになる
        ans=min(ans,k-ans);

        cout << ans << endl;

   

}