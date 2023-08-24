// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_g

#include <bits/stdc++.h>
using namespace std;

int main () {

  int D, N;
  cin >> D >> N;
  vector <int> A(D,0);
  for (int i=0;i<N;++i){
    int L, R;
    cin >> L >> R;
    for (int j=L-1;j<R;++j){
      ++A.at(j);
    }
  }

  for (int i=0;i<D;++i){
    cout << A.at(i) << endl;
  }

}

