
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans=n;
    for(int i=0; i<n-1; i++){
        if(s[i] ==s[i+1]){
            ans --;
        }
    }
    cout << ans << endl;
}