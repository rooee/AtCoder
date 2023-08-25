// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_h

#include <bits/stdc++.h>
using namespace std;

int main () {

  int H, W;
  cin >> H >> W;
  vector <vector <int>> X(H+1, vector<int>(W+1,0));
  for (int h=1;h<H+1;++h){
    for (int w=1;w<W+1;++w){
      int x;
      cin >> x;
      X.at(h).at(w)=x+X.at(h-1).at(w)+X.at(h).at(w-1)-X.at(h-1).at(w-1);
    }
  }

  int Q;
  cin >> Q;
  for (int i=0;i<Q;++i){
    int A, B, C, D;
    cin >> A >> B >> C >> D ;
    cout << X.at(C).at(D)-X.at(C).at(B-1)-X.at(A-1).at(D)+X.at(A-1).at(B-1) <<endl;
  }
}

