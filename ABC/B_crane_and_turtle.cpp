#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int x, y;
    int ans;
    cin >> x >> y;
    for (int i = 0; i < x + 1; i++){
        if(4 * x - y == 2 * i ){
            ans ++;
        }
    }
    if (ans > 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    
}