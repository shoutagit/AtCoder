
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    if(s.size() <= k){
        cout << s << endl;
    }
    else{
        string ans=s.substr(0,k)+"...";
        cout << ans << endl;
    }

   

}