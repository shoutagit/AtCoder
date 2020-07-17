
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()


int main(){
    int a, b;
    cin >> a >> b;
    int ans=0;
    rep(i,b-a+1){
        if((a+i)/10000 == (a+i)%10 && ((a+i)%10000)/1000 == ((a+i)%100)/10){
            ans ++;
        }
    }
    cout << ans << endl;
}