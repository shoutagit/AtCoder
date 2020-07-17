
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string o, e;
    cin >> o >> e;
    string ans;

    //oとeの長さが等しい場合には順番に出力するだけでOK
    rep(i, min(o.size(),e.size())){
        cout << o.at(i) << e.at(i);
    }
    
    if (o.size() > e.size()){
        cout << o.at(o.size() - 1) << endl;
    }
    if (o.size() < e.size()){
        cout << e.at(e.size() - 1) << endl;
    }
}