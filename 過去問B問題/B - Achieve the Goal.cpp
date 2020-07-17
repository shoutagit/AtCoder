
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n, k, m;
    cin >> n >> k >> m;
    int sum=0;
    for(int i=0; i<n-1; i++){
        int a;
        cin >> a;
        sum += a;
    }
    int target = m*n;
    if(target - sum > k){
        cout << -1 << endl;
        return 0;
    }
    else if(target - sum >0){
        cout << target - sum << endl;
        return 0;
    }
    else{
        cout << 0 << endl;
    }
}