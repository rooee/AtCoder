// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_k

#include <bits/stdc++.h>
using namespace std;

int main () {

  int N, X;
  cin >> N >> X ;
  vector<int> A(N);

  for (int i=0;i<N;++i){
    cin >> A.at(i);
  }
/*
  for (int i=0;i<N;++i){
    cout << A.at(i) << ", ";
  }
  cout << endl;

  int min=0, max=N-1;
  while(1){
    if (A.at((min+max)/2)<X){
      min=(min+max)/2;
    } else if (A.at((min+max)/2)>X){
      max=(min+max)/2;
    } else {
      break;
    }
  }
  cout << (min+max)/2+1 << endl;
*/

  int min=0, max=N-1, n, x;
  while(1){
    n=(min+max)/2;
    x=A.at(n);
    if (x<X){
      min=n+1;
    } else if (x>X){
      max=n-1;
    } else {
      break;
    }
  }
  cout << n+1 << endl;


}

