
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ( a * b >= c * d){
        cout << a * b << endl;
    }
    else{
        cout << c * d << endl;
    }
    
}