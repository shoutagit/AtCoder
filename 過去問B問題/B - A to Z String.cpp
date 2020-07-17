
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string s;
    cin >> s;
    int start,end;
    for(int i=0; i < s.size(); i++){
        if (s.at(i) == 'A'){
            start = i;
            break;
        }
    }
    for(int i=s.size(); i > 0; i--){
        if (s.at(i - 1) == 'Z'){
            end = i;
            break;
        }
    }  
    cout << end - start  << endl;
}