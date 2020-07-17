
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
    double l;
    cin >> l;
    double ans=l*l*l;
    ans /= 27;
    //c++で小数点以下を正確に表記するにはprintfを使う
    //%fはfloat8は小数点以下の桁数
    printf("%.8f",ans);
   

}