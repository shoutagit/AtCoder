
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    cin >> n;
    string x;
    cin >> x;

    int popcount=0;
    int xnum=0;
    for(int i=n-1; i>=0; i--){
        if(x[i]=='1'){
            popcount ++;
            
        }

    }



    for(int i=0; i<n; i++){
        string temp;
        temp = x;
        if(temp[i]=='0'){
            temp[i]='1';
            popcount ++;
        }
        else{
            temp[i]=='0';
            popcount --;
        }




    }
}