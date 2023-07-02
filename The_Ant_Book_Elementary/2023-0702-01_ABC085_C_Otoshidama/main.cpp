// https://atcoder.jp/contests/abc085/tasks/abc085_c
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, Y; 
  cin >> N >> Y;

  for (int b10k=0;b10k<=N;++b10k){
    for (int b5k=0;b5k<=N;++b5k){
      int b1k=N-b10k-b5k;
      if ((b1k>=0)&&(Y==10000*b10k+5000*b5k+1000*b1k)){
        cout<<b10k<<" "<<b5k<<" "<<b1k<<endl;
        return 0;
      }
      if (b1k<=0){
        continue;
      }
    }
  }
  cout<<"-1 -1 -1"<<endl;
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
}
