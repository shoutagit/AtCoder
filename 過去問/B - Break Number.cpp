
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n; cin >> n;
    int ans = 1;
    while(ans < n){
        //2の累乗になる数の中で一番nに近い数を探す
        if(ans * 2 > n) break;
        ans = ans * 2;
    }
    cout << ans;
}