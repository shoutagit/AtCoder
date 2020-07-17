
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()


int main(){
    int n; cin >> n;
    vector<int> d(n);
    rep(i,n) cin >> d[i];

    sort(all(d),greater<int>());
    //最低でも1あり、隣り合う要素に差があれば+1する
    int ans=1;
    for(int i=0; i<n-1; i++){
        if(d[i] > d[i+1]){
            ans ++;
        }
    }
    cout << ans << endl;
}