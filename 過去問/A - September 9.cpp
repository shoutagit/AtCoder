
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n; cin >> n;
    if(n % 10 == 9 || n / 10 == 9){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
}