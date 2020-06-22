
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n, m;
    cin >> n >> m;
    vector<ll> h(n);
    rep(i,n) cin >> h[i]; //高さ
    
    vector<int> good(n,1);

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        if(h[a-1] < h[b-1]){
            good[a-1] = 0;
        }
        else if(h[a-1] > h[b-1]){
            good[b-1] = 0;
        }
        else{
            good[a-1] =0;
            good[b-1] =0;
        }
    }

    int res=0;
    for(int i=0; i<n; i++){
        if(good[i]==1) res ++;
    }
    cout << res << endl;
    
}