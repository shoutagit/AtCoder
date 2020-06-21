
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;


//xor和と加算和が等しいという条件を満たす部分列を数え上げる
// x xor y = x + y ↔︎ 二進数におけるどの桁を見てもビットが立っているのは高々一方のみ
int main(){
   ll n;
   cin >> n;
   vector<int> a(n);
   rep(i,n) cin >> a.at(i);

   //尺取法
   ll res=0;
   int right=0;
   int sum=0;
   for(int left=0; left<n; left++){
       while(right<n && (sum ^ a[right])==(sum + a[right])){
           sum += a[right];
           ++right;
       }
       res += right - left;
       if(right==left) right++;
       else sum -= a[left];
   }
   cout << res << endl;

}