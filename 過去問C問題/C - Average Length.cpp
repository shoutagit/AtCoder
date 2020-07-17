
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;

int x[10],y[10];

double dist(int i, int j) {
    double dx = x[i] - x[j];
    double dy = y[i] - y[j];
    return pow(dx * dx + dy * dy, 0.5);
}


int main(){
    int n;
    cin >> n;
    double sum=0.0;
    for(int i=1; i<=n; i++) cin >> x[i] >> y[i];


    //n!通りの処理
    //1,2,3,4...となるベクトルを作る
    vector<int> v(n);
    rep(i,n) v[i] = i+1;

    do{
        rep(i,n-1) sum += dist(v[i],v[i+1]);
    }while(next_permutation(all(v)));

    //パターンはn!あるのでn!を計算
    int fact = 1;
    for(int i=2; i<=n; i++) fact *= i;

    cout << fixed << setprecision(10) <<  sum / fact << endl;

}