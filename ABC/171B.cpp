
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
   int n, k;
   cin >> n >> k;
   vector<int> p(n);
   rep(i,n) cin >> p.at(i);

   sort(all(p));
   int sum=0;
   for(int i=0; i<k; i++){
       sum += p.at(i);
   }
   cout << sum << endl;

}