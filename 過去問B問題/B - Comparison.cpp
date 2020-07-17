
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// a,bは最大10^100
int main(){
    //intではなくlong doubleを使えばいい
    long double a, b;
    cin >> a >> b;
    if(a>b){
        cout << "GREATER" << endl;
    }
    else if (a<b){
        cout << "LESS" << endl;
    }
    else{
        cout << "EQUAL" << endl;
    }
    
    
}