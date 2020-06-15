
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int k, s;
    cin >> k >> s;
    int count =0;
    // xとyを0〜kまで探索し、zが適正な値になるならcountを増やす
    for( int x = 0; x <= k; x++){
        for ( int y = 0; y <= k; y++){
            int z = s - x - y;
            if (z>= 0 && z <= k){
                count++;
            }
        }
    }
    cout << count << endl;
    
}