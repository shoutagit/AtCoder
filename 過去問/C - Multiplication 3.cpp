
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
    ll a;
    double b;
    cin >> a >> b;
    
    //bはdoubleのため100倍しても.00が残る
    //それをroundで消し、ll型に直して掛け算すればオーバーフローを防げる
    cout << (a*(ll)round(b*100)) /100 << endl;


   

}