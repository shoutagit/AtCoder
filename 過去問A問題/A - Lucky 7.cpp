
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
    int n;
    cin >> n;
    if(n/100 == 7 || (n%100)/10 == 7 || n%10 == 7){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;


}