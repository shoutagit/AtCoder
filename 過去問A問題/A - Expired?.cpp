
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int x, a, b;
    cin >> x >> a >> b;
    if(a >= b){
        cout << "delicious"  << endl;
    }
    else if(b - a <= x){
        cout << "safe" << endl; 
    }
    else{
        cout << "dangerous" << endl;
    }
    
}