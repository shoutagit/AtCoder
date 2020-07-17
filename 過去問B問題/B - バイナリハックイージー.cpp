
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string s;
    cin >> s;
    string ans;
    for(int i = 0; i < s.size(); i++){
        if(s.at(i) == '0'){
            ans += '0';
        }
        else if(s.at(i) == '1'){
            ans += '1';
        }
        else if(s.at(i) == 'B' && ans != ""){
            ans.pop_back();
        }
    }
    cout << ans << endl;
    
}