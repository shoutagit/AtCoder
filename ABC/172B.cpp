
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    string s, t;
    cin >> s >> t;
    int ans=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] != t[i]){
            ans ++;
        }
    }
    cout << ans << endl;
}