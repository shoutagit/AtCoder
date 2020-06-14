#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;
    if (N <= K)
    {
        cout << N * X << endl;
    }
    else{
        cout << (K * X) + (N - K) * Y << endl;
    }
    
}