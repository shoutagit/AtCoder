
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string w;
    cin >> w;

    // 配列の宣言　型　配列名[要素の個数] = {要素の一覧}
    int data[26] = {0};
    for(int i = 0; i < w.size(); i++){
        //今見ている文字をアルファベットの昇順に変換する
        int index = w.at(i) - 'a';
        // カウンタを増やす
        data[index] ++;
    }
    int flag = 0;
    //数え上げたアルファベットの数を確認する
    for(int i = 0; i < 26; i++){
        if(data[i] %2 == 1) flag =1;
    }
    if(flag ==0)cout << "Yes" <<endl;
    else cout << "No" << endl;
    
}