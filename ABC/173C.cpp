
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int ans=0;
    //1<<hは2のh乗を表している
    rep(is,1<<h)rep(ls,1<<w){
        int cnt=0;
        rep(i,h)rep(j,w){
            //2進数のi桁目を取り出すにはこうする
            if(is>>i&1)continue;
            if(ls>>j&1)continue;
            if(s[i][j]=='#') cnt++;
        }
        if(cnt==k) ans++;
    }
    cout << ans << endl;
    return 0;
}