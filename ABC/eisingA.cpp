
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int l, r, d;
    cin >> l >> r >> d;
    int ans=0;
    for(int i=l; i<=r; i++){
        if(i%d==0) ans++;
    }
    cout << ans << endl;
}