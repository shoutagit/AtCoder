
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n, m;
    cin >> n >> m;
    //要素数n,初期値0
    vector<int> city(n,0);
    int a,b;
    rep(i,m){
        cin >> a;
        city.at(a-1) ++;
        cin >> b;
        city.at(b-1) ++;
    }
    rep(i,n){
        cout << city.at(i) << endl;
    }
    
}