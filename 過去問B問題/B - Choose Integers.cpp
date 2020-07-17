
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    // aの倍数の総和%b==cにできるか判定
    //b回以上繰り返しても意味はない
    for ( int i=0; i<b; i++){
        if(a * (i+1) % b == c){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
    
}