
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int a, b;
    cin >> a >> b;
    if (a == b){
        cout << "Draw" << endl;
    }
    else if (a == 1){
        cout << "Alice" << endl;
    }
    else if ( b ==1){
        cout << "Bob" << endl;
    }
    else{
        if(a > b){
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
}