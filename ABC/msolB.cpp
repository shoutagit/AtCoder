
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    while(true){
        if(a<b) break;
        if(k==0){
            cout << "No" << endl;
            return 0;
        }
        b *= 2;
        k --;
    }
    while(true){
        if(b<c) break;
        if(k==0){
            cout << "No" << endl;
            return 0;
        }
        c *= 2;
        k --;
    }

    cout << "Yes" << endl;

}