// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_e

#include <bits/stdc++.h>
using namespace std;

int main () {

  int N, K, ct=0;
  cin >> N >> K;

  for (int i=1;i<=N;++i){
    for (int j=1;j<=N;++j){
      int k=K-i-j;
      if (1<=k&&k<=N){
        ++ct;
      }
    }
  }

  cout << ct << endl;
}

