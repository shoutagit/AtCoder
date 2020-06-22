
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
    int k, a, b;
    cin >> k >> a >> b;
    for(int i=a; i<=b; i++){
        if(i%k==0){
            cout << "OK" <<endl;
            return 0;
        }
    }
    cout << "NG" << endl;

   

}