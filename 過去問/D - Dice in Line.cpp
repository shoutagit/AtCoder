
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

double expect(int x){
    return (1+x)/2;
}

//累積和が使えそう
int main(){
    int n, k;
    cin >> n >> k;
    vector<double> e(n);

    //期待値計算
    rep(i,n){
        int p;
        cin >> p;
        e[i] = expect(p);
    } 

    //累積和
    vector<double> cumsum(n+1);
    cumsum[0]=0;
    for(int i=0; i<n; i++){
        cumsum[i+1] = cumsum[i] + e[i];
    }

    double ans=0;
    for(int i=k+1; i<=n; i++){
        double temp=cumsum[i] - cumsum[i-k];
        ans = max(ans,temp);
    }

    cout << setprecision(10) << ans << endl;

}