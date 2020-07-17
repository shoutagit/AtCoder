

//尺取法の練習
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }



int main(){
    int n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);

    //単調増加という条件も「満たしている区間の部分区間も満たす」という構造をしているので尺取法が使える
    ll res=0;
    int right=1;
    for(int left=0; left<n; left++){
        //whileを1つ進めたものが条件を満たすか否か
        while(right<n && (right <= left || a[right-1] < a[right])){
            right ++;
        }
        res += right - left;
        if(left==right) ++right;
    }
    cout << res << endl;


}