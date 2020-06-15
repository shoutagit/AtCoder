
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n, l;
    cin >> n >> l;
    vector<string> s(n);
    rep(i,n){
        cin >> s.at(i);
    }
    //　これだけで辞書順でソートできる
    sort(s.begin(),s.end());
    rep(i,n){
        cout << s.at(i);
    }
    cout << endl;
}