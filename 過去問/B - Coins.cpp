
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()


int main(){
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int ans=0;
    rep(i,a+1){
        rep(j,b+1){
            rep(k,c+1){
                if(500*i + 100*j + 50*k == x){
                    ans ++;
                }
            }
        }
    }
    cout << ans << endl;
}