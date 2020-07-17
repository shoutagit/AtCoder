
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    cin >> n;
    int ans=0;
    int beforemin = 1e9;
    for(int i=0; i<n; i++){
        ll p; 
        cin >> p;
        if(p <= beforemin){
            ans ++;
            beforemin = p;
        }
        else continue;
    }
    cout << ans << endl;
}