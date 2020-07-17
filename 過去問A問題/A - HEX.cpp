
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    char x, y;
    cin >> x >> y;
    // char型のままでも比較はできる
    if((x > y)) cout << '>' << endl;
    else if(x == y) cout << '=' << endl;
    else cout << '<' << endl;
}