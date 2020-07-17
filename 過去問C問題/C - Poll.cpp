
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    int xnum=0; //一番多いカウントを記録しておく
    rep(i,n){
        string s;
        cin >> s;
        mp[s] ++;
        xnum = max(xnum, mp[s]);
    }
    //範囲for文を使うとpがmp[i]になる
    //map[i].secondで値、map[i].firstでキーを取り出せる
    for(auto& p:mp){
        if(p.second == xnum) cout << p.first << endl;
    }


}