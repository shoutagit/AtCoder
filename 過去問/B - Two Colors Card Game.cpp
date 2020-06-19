
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()


int main(){
    //stringの重複をなくしたいのでmapを用いる
    //mapでは[]演算子で存在しない要素にアクセスすると自動的に要素が追加される
    map<string, int> p;
    int n; cin >> n;
    rep(i,n){
        string s;
        cin >> s;
        p[s] ++;
    }
    int m; cin >> m;
    rep(i,m){
        string t;
        cin >> t;
        p[t] --;
    }
    int a=0;
    // 範囲for文　配列の全要素に処理を行う
    for(auto x:p){
        a=max(a,x.second);
    }
    cout << a << endl;
}