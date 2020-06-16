
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    rep(i,h){
        cin >> a.at(i);
    }
    // 上1行
    rep(i,w+2) cout << '#';
    cout << endl;

    rep(i,h){
        cout << '#' << a.at(i) << '#' << endl;
    }
    // 下1行
    rep(i,w+2) cout << '#';
    cout << endl;

    return 0;
    
}