
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int a, b;
    cin >> a >> b;
    if(a % 3 ==0 || b % 3 == 0 || (a+b) % 3 ==0){
        cout << "Possible" << endl;
    }
    else cout << "Impossible" << endl;
    
}