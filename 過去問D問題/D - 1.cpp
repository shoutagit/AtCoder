
//桁DPの練習
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

//これはmain関数の外で定義しないと不正解になる
string N;
ll dp[11][2][11];

int main(){    
    cin >> N;
    int n = N.size();

    //dp[i][smaller][j]
    //smallerは一度1になったらそのあとは1にしか遷移しない
    //i桁目までを決めた時、1がj回出現する数がいくつあるか
    //桁数は最大10桁なのでiとjはmax11にしている
    dp[0][0][0] = 1;

    rep(i,n){
        rep(j,10){
            //i桁目まででNより小さいならi+1桁目はなんでもいい
            dp[i+1][1][j] += dp[i][1][j]*9; //i+1桁目が1以外のときは1がj回出現するカウントを増やす
            dp[i+1][1][j+1] += dp[i][1][j]; //i+1桁目が1のときは1がj+1回出現するカウントを増やす

            int ni = (N[i] - '0');

            //i桁目までNと同じで、i+1桁目はNより小さい数のとき
            if(ni>1){
                dp[i+1][1][j] += dp[i][0][j]*(ni-1); //i+1桁目が0~ni-1のうちの1以外
                dp[i+1][1][j+1] += dp[i][0][j]; //i+1桁目が1
            }else if(ni == 1){
                dp[i+1][1][j] += dp[i][0][j]; //i+1桁目が0
            }

            //i桁目までNと同じで、i+1桁目もNと同じ数のとき
            if(ni == 1){
                dp[i+1][0][j+1] = dp[i][0][j]; //i+1桁目が1
            }else{
                dp[i+1][0][j] = dp[i][0][j];
            }
        }
    }
    ll ans=0;
    rep(j,10){ans += (dp[n][0][j] + dp[n][1][j]) *j;}
    cout << ans << endl;
    return 0;
}