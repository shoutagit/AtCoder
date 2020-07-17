
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    string s;
    cin >> n >> s;
    if(n%2==1){
        cout <<"No" << endl;
    }
    else if(s.substr(0,n/2) == s.substr(n/2,n/2)){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
}