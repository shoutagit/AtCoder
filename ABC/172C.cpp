
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

//単調増加なので二分探索でできる
//以下は尺取法を行っている
int main(){
    ll n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    ll t=0;
    rep(i,m) t+= b[i];

    int j=m;
    int ans=0;
    //i(A側)とj(B側)の2つのカーソルを追う
    rep(i,n+1){
        //合計時間tがkを超えていたら１つずつ諦める
        while(j>0 && t>k){
            --j;
            t -= b[j];
        }
        //もう諦められる本がない(j=0)かつt>kならbreak
        if(t>k) break;
        ans = max(ans,i+j);
        //配列外参照を防ぐためにbreakで誤魔化している
        if(i==n) break;
        t+= a[i];
    }

    cout << ans << endl;
    return 0;
   


}