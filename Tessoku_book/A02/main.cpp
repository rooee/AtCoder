// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_b

#include <bits/stdc++.h>
using namespace std;

int main () {

  int N, X, A;
  cin >> N >> X;

  for (int i=0; i<N; ++i){
    cin >> A;
    if (X==A){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}

