
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    rep(i,n){
        cin >> l.at(i);
    }
    //降順でソートする
    sort(l.rbegin(), l.rend());


    int ans =0;
    rep(i,k){
        ans += l.at(i);
    }
    cout << ans << endl;
}