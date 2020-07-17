
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;



int main(){
    int n, k;
    cin >> n >> k;
    vector<int> have(n,0);
    for(int i=0; i<k; i++){
        int d;
        cin >> d;
        rep(j,d){
            int temp;
            cin >> temp;
            have[temp-1] = 1;
        }
    }
    int res=0;
    for(int i=0; i<n; i++){
        if(have[i] == 0) res ++;
    }
    cout << res << endl;


   

}