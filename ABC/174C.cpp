
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

//modの世界で考えることにより桁数がオーバーすることを防げる
int main(){
    int k;
    cin >> k;
    //kが7より小さい時のために7%kにする
    int x = 7%k;
    set<int> s;
    int i=1; //カウンタ
    while(s.count(x)==0){
        //xが0になったらその時点で終了
        if(x==0){
            cout << i << endl;
            return 0;
        }
        //一回訪れたところはsetに挿入する
        s.insert(x);
        x=(x*10+7)%k;
        ++i;
    }
    cout << -1 << endl;
    return 0;
}