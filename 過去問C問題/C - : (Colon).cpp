
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    double a, b, h, m, ans;
    cin >> a >> b >> h >> m;


    // 角度を定義して弧度法に変換
    double angle = 30*h - 5.5*m;
    if(angle>180) angle=360-angle;
    // 円周率はM_PI
    angle = (angle *M_PI) / 180;

    ans = sqrt(a*a + b*b - 2*a*b*cos(angle));
    

    cout << fixed << setprecision(20) << ans << endl;

    
}