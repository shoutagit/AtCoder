
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i,n) cin >> d[i];

    int ans=0;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            ans += d[i]*d[j];
        }
    }
    cout << ans << endl;

}