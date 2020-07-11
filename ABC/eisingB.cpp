
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    int ans=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==1 && i%2==0){
            ans ++;
        }
    }
    cout << ans << endl;
}