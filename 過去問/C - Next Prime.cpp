
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;


int main(){
    int x;
    cin >> x;
    
    vector<int> is_prime(120000,1);
    is_prime[0]=0;
    is_prime[1]=0;
    for(int i=2; i<120000; i++){
        if(!is_prime[i]) continue;
        for(int j=i*2; j<120000; j+=i) is_prime[j]=0;
    }
    for(int i=x; x<120000; i++){
        if(is_prime[i] == 1){
            cout << i << endl;
            return 0;
        }
    }

}