
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()


int main(){
    int a, b;
    string s;
    cin >> a >> b >> s;
    bool ans = true;
    //前半部分が-になっていないかチェック
    rep(i,a){
        if(s.at(i) == '-'){
            ans = false;
            break;
        }
    }
    if(s.at(a) != '-'){
        ans = false;
    }
    //後半部分が-になっていないかチェック
    //i<a+bにすることに注意
    for(int i=a+1; i<a+b; i++){
        if(s.at(i) == '-'){
            ans = false;
            break;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}