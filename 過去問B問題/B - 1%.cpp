
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
    ll x;
    cin >> x;
    int ans=0;
    ll money=100;
    while(true){
        if(money >= x){
            break;
        }
        else{
            //money *= 1.01とするとオーバーフローする可能性がある
            money +=  money/100;
            ans ++;
        }
    }
    cout << ans << endl;

}