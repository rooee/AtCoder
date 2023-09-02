// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_j

#include <bits/stdc++.h>
using namespace std;

int main () {

  int N;
  cin >> N ;
  vector<int> A(N+2);
  A.at(0)=A.at(N+1)=0;
  for (int i=1;i<N+1;++i){
    cin >> A.at(i);
  }
  vector<int> BU(N+2), TD(N+2);
  BU.at(0)=A.at(0);
  TD.at(N+1)=A.at(N+1);
  for (int i=1;i<N+1;++i){
    BU.at(i)    =max(A.at(i)    ,BU.at(i-1));
    TD.at(N+1-i)=max(A.at(N+1-i),TD.at(N+2-i));
  }
/*
  for (int i=0;i<N+2;++i){
    cout << A.at(i) << ", ";
  }
  cout << endl;

  for (int i=0;i<N+2;++i){
    cout << BU.at(i) << ", ";
  }
  cout << endl;

  for (int i=0;i<N+2;++i){
    cout << TD.at(i) << ", ";
  }
  cout << endl;
*/
  int D;
  cin >> D;
  for (int i=0;i<D;++i){
    int L, R;
    cin >> L >> R;
    cout << max(BU.at(L-1), TD.at(R+1))<< endl;
  }

}

