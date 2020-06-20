
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }


int N;
string S;

int solve(){
    //まずEとWの累積和を得る
    int allE=0,allW=0;
    rep(i,S.size()){
        if(S[i]=='E') ++allE;
        else ++allW;
    }
    
    int res = S.size();
    int curE=0,curW=0;
    //iより右でEの人とiより左でWの人が向きを変えることになる
    //iは一番左から右にずれていくので最初はallE=curE。i自身がEだと観測するごとにcurEを増やしていく。
    rep(i,S.size()){
        int migiE = allE - curE;
        if(S[i]=='E') --migiE;
        res = min(res,curW+migiE); 

        if(S[i]=='E') ++curE;
        else ++curW;
    }
    return res;
}

int main(){
    while(cin >> N >> S){
        cout << solve() << endl;
    }
    

}