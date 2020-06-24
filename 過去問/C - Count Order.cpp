
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    rep(i,n) cin >> p[i];
    rep(i,n) cin >> q[i];
    vector<int> a(n);
    //a={1,2,3,4...}のようになる
    rep(i,n) a[i] = i+1;

    map<vector<int>, int> mp;
    //next_permutation関数は自動で辞書順の順列を作ってくれる
    do{
        mp[a] = mp.size();
    }while(next_permutation(all(a)));

    //mp[p]にはpという並びが辞書順で何番目かが入っている
    int ans = abs(mp[p] - mp[q]);
    cout << ans << endl;
    return 0;
}