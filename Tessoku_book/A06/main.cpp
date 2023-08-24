// https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_ai

#include <bits/stdc++.h>
using namespace std;

int main () {

  int N, Q;
  cin >> N >> Q;
  vector <int> A(N+1);
  A.at(0)=0;
  for (int i=1;i<=N;++i){
    int tmp;
    cin >> tmp;
    A.at(i)=A.at(i-1)+tmp;
  }

  for (int i=0;i<Q;++i){
    int L, R;
    cin >> L >> R ;
    cout << A.at(R)-A.at(L-1) << endl;
  }
}

