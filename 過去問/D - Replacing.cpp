
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

//mapを使わなくても制約より大きなベクトルを作り、その対応indexを増やすやり方で実装できる
const int MX=100005;

int main(){
    int n;
    cin >> n;
    //データの持ち方を値：その値を持つカウントという持ち方に変える
    //1回のクエリごとに変わるのは高々2箇所
    vector<ll> cnt(MX);
    rep(i,n){
        int a;
        cin >> a;
        cnt[a] ++;
    }

    ll total=0;
    rep(i,MX) total += i*cnt[i];

    int q;
    cin >> q;
    rep(i,q){
        int b, c;
        cin >> b >> c;
        total -= b*cnt[b];
        total -= c*cnt[c];
        cnt[c] += cnt[b];
        cnt[b] = 0;
        total += b*cnt[b];
        total += c*cnt[c];
        cout << total << endl;
    }
}