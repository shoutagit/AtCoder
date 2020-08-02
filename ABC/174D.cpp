
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    cin >> n;

    vector<char> c(n);
    int red=0;

    rep(i,n){
        cin >> c[i];
        if(c[i]=='R') red ++;
    }

    int ans=0;
    for(int i=0; i<red; i++){
        //redzoneにwhiteがあったらans++
        if(c[i]=='W'){
            ans ++;
        }
    }
    cout << ans << endl;
}