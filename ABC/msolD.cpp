
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    ll money=1000;
    ll stock=0;
    ll temp=0;
    for(int i=1; i<n; i++){
        if(a[i]>a[temp]){
            //temp時点で買えるだけ株を買う
            stock = money/a[temp];
            money -= stock*a[temp];
            //a[i]時点で全株売る
            money += stock*a[i];
            stock =0;
        }
        temp=i;
    }
    cout << money << endl;
}