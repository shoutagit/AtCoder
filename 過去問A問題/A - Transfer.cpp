
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int ans= c - a + b;
    if(ans<0) ans=0;
    cout << ans << endl; 
}