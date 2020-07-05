
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int main(){
    int n;
    cin >> n;
    int ac=0;
    int wa=0;
    int tle=0;
    int re=0;
    
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s=="AC") ac++;
        if(s=="WA") wa++;
        if(s=="TLE") tle++;
        if(s=="RE") re++;
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
}