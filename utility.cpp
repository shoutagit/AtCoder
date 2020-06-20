
// グリッド問題で周辺8方位を表すための変数
int dx[8] = {1,0,-1,0,1,-1,-1,1};
int dy[8] = {0,1,0,-1,1,1,-1,-1};

//降順でのソート
sort(all(変数),greater<int>());

//アルファベットの集合
vector<int> alpha(26,0);

//最大公約数を求める関数
int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

//最大公約数を求める関数(先にgcdを定義しておく)
int lcm(int a, int b){
    return a * b / gcd(a,b);
}