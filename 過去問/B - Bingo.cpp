
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    vector<vector<int>> a(3,vector<int>(3));

    rep(i,3){
        cin >> a[i][0] >>a[i][1] >> a[i][2];
    }
    int n;
    cin >> n;
    //選ばれた数がビンゴカードにあったらそこを0にする
    rep(i,n){
        int b;
        cin >> b;
        rep(j,3){
            rep(k,3){
                if(a[j][k] == b){
                    a[j][k] = 0;
                }
            }
        }
    }

    //横に揃っているか
    rep(i,3){
        if(a[i][0] == a[i][1] && a[i][1]==a[i][2]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    //縦に揃っているk
    rep(i,3){
        if(a[0][i] == a[1][i] && a[1][i]==a[2][i]){
            cout << "Yes" << endl;
            return 0;
        }
    }

    //斜めに揃っているか
    if(a[0][0] == a[1][1] && a[1][1]==a[2][2]){
        cout << "Yes" << endl;
        return 0;
    }
    if(a[0][2] == a[1][1] && a[1][1]==a[2][0]){
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

}