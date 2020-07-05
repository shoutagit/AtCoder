
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    cin >> n;
    if(n%1000==0){
        cout << 0 << endl;
        return 0;
    }
    int ans = 1000 - n%1000;
    cout << ans << endl;
}