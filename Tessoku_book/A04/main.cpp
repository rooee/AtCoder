// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_d

#include <bits/stdc++.h>
using namespace std;

int main () {

  const int K=10;
  vector <int> digit(K,0);
  int N;
  cin >> N;

  for (int i=0;i<K;++i){
    digit.at(K-1-i)=N&1;
    N=N>>1;
  }

  for (int i=0;i<K;++i){
    cout << digit.at(i) ;
  }
  cout << endl;
}

