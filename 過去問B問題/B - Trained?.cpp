
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin >> n;

    int count = 0,next = 1;

    vector<int> a(n);
    rep(i,n){
        cin >> a.at(i);
    }


    rep(i,n){
        //nextの初期値を1、添字をnext-1にするところでつまずいていた
        next = a.at(next - 1); 
        count ++;
        if(next == 2){
            cout << count << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;


    
}