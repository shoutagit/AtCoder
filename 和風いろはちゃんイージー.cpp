#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  vector<int> a(3);
  rep(i,3){
      cin >> a.at(i);
  }
  int five = 0;
  int seven = 0;

  rep(i,3){
      if (a.at(i) == 5){
          five ++;
      }
      else if (a.at(i) == 7){
          seven++;
      }
  }
  if ((five == 2) && (seven == 1)){
      cout << "YES" << endl;;
  }
  else {
      cout << "NO" << endl;
  }

  

}