
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
    int n;
    cin >> n;
    
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            if(i * j == n){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
   cout << "No" << endl;

}