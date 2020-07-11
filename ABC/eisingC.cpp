
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    cin >> n;
    vector<int> ans(n,0);
    for(int i=1; i<100; i++){
        for(int j=1; j<100; j++){
            for(int k=1; k<100; k++){
                if(i*i +j*j +k*k +i*j +j*k +k*i <= n){
                    ans[i*i +j*j +k*k +i*j +j*k +k*i-1] ++;
                }
            }
        }
    }
    rep(i,n){
        cout << ans[i] << endl;
    }
    return 0;
}