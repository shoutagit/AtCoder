
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()


int main(){
    int n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(all(a),greater<int>());

    //最初=0をしていなかったらダメだったので初期化は毎回するようるにしよう
    int ascore=0, bscore=0;
    rep(i,n){
        if(i%2==0) ascore += a[i];
        else bscore += a[i];
    }

    cout << ascore - bscore << endl;

}