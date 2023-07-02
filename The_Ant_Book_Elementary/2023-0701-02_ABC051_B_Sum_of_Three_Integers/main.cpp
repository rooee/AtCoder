// https://atcoder.jp/contests/abc051/tasks/abc051_b
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

int main() {

  int K, S, count=0; 
  cin >> K >> S;

  for (int x=0;x<=K;++x){
    for (int y=0;y<=K;++y){
      int z=S-x-y;
      if ((0<=z)&&(z<=K)){
        ++count;
      }
      if (z==0){
        continue;
      }
    }
  }

/*
  for (int x=0;x<=K;++x){
    for (int y=0;y<=K;++y){
      for (int z=0;z<=K;++z){
        if (x+y+z==S){
          ++count;
          continue;
        }
      }
    }
  }
*/
  cout << count << endl;
}
