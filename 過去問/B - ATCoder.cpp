
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
   string s;
   cin >> s;

   int count=0,ans=0;
   for(int i=0; i<s.size(); i++){
       if(s[i]=='A' || s[i]=='G' || s[i]=='C' || s[i]=='T'){
           count ++;
           ans = max(ans,count);
       }
       else count =0;
   }
    cout << ans << endl;
}