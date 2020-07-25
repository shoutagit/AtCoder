
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int x;
    cin >> x;
    if(x<=599){
        cout << 8 << endl;
    }
    else if(x<=799) cout << 7 << endl;
    else if(x <=999) cout << 6 << endl;
    else if(x <=1199) cout << 5 << endl;
    else if(x<=1399) cout << 4 << endl;
    else if(x<=1599) cout << 3 << endl;
    else if(x<=1799) cout << 2 << endl;
    else cout << 1 << endl;

    return 0;
}