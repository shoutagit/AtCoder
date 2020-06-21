#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
   ll n;
   cin >> n;
   string ans="";
   string alp="abcdefghijklmnopqrstuvwxyz";
   while(n>0){
       --n; //nを1ずらすことでn%26のインデックスと一致する
       ans = alp[n%26] + ans; //alp[n%26]を文字列の先頭に足していっている
       n /= 26;
   }
   
   cout << ans << endl;

}
