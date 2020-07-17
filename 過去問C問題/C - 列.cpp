
//尺取法の練習

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }

//「積がK以下」という条件は「満たしている区間の部分区間も満たす」という構造をしているため尺取法が有効
//0がある場合は例外

int main(){
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a.at(i);

    //0がある場合
    rep(i,n){
        if(a[i] ==0){
            cout << n << endl;
            return 0;
        }
    }

    //尺取法
    int res=0;
    int right=0;
    ll mul=1;

    //f(left)は広義短調増加関数になるのでf(left+1)のrightはf(left)から出発してインクリメントすればよい
    for(int left=0; left<n;left++){
        while(right<n && mul*a[right] <= k){
            mul *= a[right];
            right++;
        }
        res = max(res, right-left); //更新
        if(left==right) ++right;
        else mul /= a[left]; //leftをずらすのでa[left]で割る
    }

    cout << res << endl;


}