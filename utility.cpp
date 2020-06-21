
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

// グリッド問題で周辺8方位を表すための変数
int dx[8] = {1,0,-1,0,1,-1,-1,1};
int dy[8] = {0,1,0,-1,1,1,-1,-1};

//降順でのソート
sort(all(変数),greater<int>());

//アルファベットの集合
vector<int> alpha(26,0);

//最大公約数を求める関数
int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

//最小公倍数を求める関数(先にgcdを定義しておく)
int lcm(int a, int b){
    return a * b / gcd(a,b);
}

//尺取法のテンプレート
//https://qiita.com/drken/items/ecd1a472d3a0e7db8dce
//「条件を満たす区間を全て求める問題」に使われる
ll res=0; 
int right=0;
for(int left=0;left<n;left++){
    while(right<n && rightの条件){
        //処理
        right++;
    }
    //resの変更処理
    if(right==left) right++;
    //leftの変更処理
}

//累積和の考え方
//配列aに対して累積和sを求めると、
//aの区間[left,right)の総和がs[right]-s[left]のO(1)で求められる

//エラトステネスのふるい
//is_prime[i]が1なら素数、0なら素数でない
long long /*maxi = 素数判定したい数の上限*/;
vector<int> is_prime(maxi,1);
is_prime[0]=0;
is_prime[1]=0;
for(int i=2; i<maxi; i++){
    if(!is_prime[i]) continue;
    for(int j=i*2; j<maxi; j+=i) is_prime[j]=0;
}