// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_k

#include <bits/stdc++.h>
using namespace std;

bool isok(int m,  vector<int> &mat, int &N, int &X){
  if (m<0) return true;
  if (N-1<m) return false;
  if (mat.at(m)<=X) return true;
  return false;
}

int main () {

  int N, X;
  cin >> N >> X ;
  vector<int> A(N);

  for (int i=0;i<N;++i){
    cin >> A.at(i);
  }

  int ok=-1, ng=N;
  while(ng-ok>1){
    int mid=(ok+ng)/2;
    if (isok(mid, A, N, X)){
      ok=mid;
    } else {
      ng=mid;
    }
  }
  cout << ok+1 << endl;


}

