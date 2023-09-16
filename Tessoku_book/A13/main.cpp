// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_m

#include <bits/stdc++.h>
using namespace std;

int main () {

  int N, K;
  cin >> N >> K ;
  vector<int> A(N);

  for (int i=0;i<N;++i){
    cin >> A.at(i);
  }

  int ct=0;

  for (int i=0;i<N;++i){
    for (int j=i+1;j<N;++j){
      cout << i << "," << j << endl;
      if (A.at(j)-A.at(i)<=K){
        ++ct;
      } else {
        break;
      }
    }
  }

  cout << ct << endl;

}

