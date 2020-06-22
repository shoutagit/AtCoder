
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
    ll a, b, c, k;
    cin >> a >> b >> c >> k;
    
    if(a >= k){
        cout << k << endl;
    }
    else if(a + b >= k){
        cout << a << endl;
    }
    else{
        ll minus = k - a - b;
        cout << a - minus << endl; 
    }

   

}