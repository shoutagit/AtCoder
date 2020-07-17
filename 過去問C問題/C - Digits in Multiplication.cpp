
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
   ll n;
   cin >> n;


    ll a, b;
    ll res=1e9;
    for(int i=1; i<=sqrt(n); i++){
        if(n % i == 0){
            a = i;
            b = n/i;
            res = min(res,max(a,b));
        }
    }
    
    ll cnt=0;
    while(res>0){
        res /= 10;
        cnt++;
    }
    cout << cnt << endl;
}