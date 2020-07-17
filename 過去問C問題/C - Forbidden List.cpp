
// The first C level question that I solved.

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int x,n; cin >> x >> n;
    vector<int> mark(102,0);
    int in;
    rep(i,n){
        cin >> in;
        mark.at(in) = 1;
    }
    int diff = 0;
   while(true){
        if(mark.at(x - diff) == 0){
            cout << x - diff << endl;
            return 0;
        }
        else if (mark.at(x + diff) == 0){
            cout << x + diff << endl;
            return 0;
        }
        diff ++;
    }
}