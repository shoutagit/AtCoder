
//尺取法の練習
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }



int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    //尺取法
    int res=0;
    int right=0; //rightを0に設定しないと切る必要がない場合を表現できない
    set<int> member;

    for(int left=0; left<n; left++){
        //set.count(x)はxと等価なキーの要素数を返す
        //今回は種類がバラバラでなければいけないのでcountの結果が0である必要がある
        while(right<n && !member.count(a[right])){
            member.insert(a[right]);
            right ++;   
        }

        res = max(res,right-left);
        if(right==left) right++;
        else{
            member.erase(a[left]);
        }
    }
    cout << res << endl;
   

}