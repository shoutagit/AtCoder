
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }

//nC3だとO(N^3)になって間に合わない
//そういう時には3つのうち2つを固定して考える


int main(){
    int n;
    cin >> n;
    vector<ll> l(n);
    rep(i,n) cin >> l.at(i);
    sort(all(l));

    //aを固定してb,cを尺取法
    //長さ昇順の数直線で ・・・a・・・b・・・c・・・となる
    //初期設定としてbをaの場所から、cをbの場所から始める
    ll res=0;
    rep(a,n){
        int c=a;
        for(int b=a+1; b<n; b++){
            while(c<n && l[c] < l[a] + l[b]) ++c;
            res += c-(b+1);
        }
    }
    cout << res << endl;



}