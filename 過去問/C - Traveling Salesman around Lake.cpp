
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;


//使わないのは近所が最も遠い2点間のみ
int main(){
    int n, k;
    cin >> k >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    sort(all(a));

    int ans=0;
    int nouse=0;
    for(int i=0; i<n-1;i++){
        nouse = max(nouse,a[i+1]-a[i]);
    }
    nouse = max(nouse,k-a[n-1]+a[0]);
    
    ans = k - nouse;
    cout << ans << endl;

   

}