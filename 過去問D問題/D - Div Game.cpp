
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

//エラトステネスのふるい
struct Sieve {
    int n;
    //fはその数を割り切れる最小の素数
    vector<int> f, primes;

    //エラトステネスのふるい
    Sieve(int n=1):n(n), f(n+1) {
        f[0] = f[1] = -1;
        for (ll i = 2; i <= n; ++i) {
            if (f[i]) continue;
            primes.push_back(i);
            f[i] = i;
            //範囲内でiの倍数になる整数全てのfをiにする
            for (ll j = i*i; j <= n; j += i) {
                if (!f[j]) f[j] = i;
            }
        }
    }
   
    //f[x]==x、つまりxを割り切れる最小の素数がxそのものなら素数
    bool isPrime(int x) { return f[x] == x;}

    //xを入力するとxが1になるまで素数で割り続ける
    vector<int> factorList(int x) {
        vector<int> res;
        while (x != 1) {
            res.push_back(f[x]);
            x /= f[x];
        }
        return res;
    }
    //素因数分解をする関数　今回はllなのでこれは使わず一つ下のfactorを使う
    vector<P> factor(int x) {
        vector<int> fl = factorList(x);
        if (fl.size() == 0) return {};
        vector<P> res(1, P(fl[0], 0));
        for (int p : fl) {
            if (res.back().first == p) {
                res.back().second++;
            } else {
                res.emplace_back(p, 1);
            }
        }
        return res;
    }

    //返り値resは(素因数、その次数)のpair
    vector<pair<ll,int>> factor(ll x){
        vector<pair<ll, int>> res;
        for(int p:primes){
            int y=0;
            while(x%p==0) x/=p, ++y;
            //res(pair)のfirstにはp、secondにはyを追加する
            if(y!=0) res.emplace_back(p,y);
        }
        if(x!=1) res.emplace_back(x,1);
        return res;
    }
};


int main(){
    ll n;
    cin >> n;

    //nは1〜10の12乗なのでその平方根の100000以上のふるいを作る
    Sieve s(1000005);
    //1000005までの素因数分解を使ってnを分解し、fs=pair<ll,int>にいれる
    auto fs = s.factor(n);

    int ans=0;
    for(auto p:fs){
        //p.secondには各素因数の次数が入っている
        int x = p.second;
        int b=1;
        //例えば次数が10ならb=1,b=2,b=3,b=4で4回引ける
        while(b<=x){
            x -=b;
            b++;
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;

}