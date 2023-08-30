// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_i

#include <bits/stdc++.h>
using namespace std;

int main () {

  int H, W,N;
  int A, B, C, D;
  cin >> H >> W >>N ;
  vector <vector <int>> X(H, vector<int>(W,0));
  for (int i=0;i<N;++i){
    cin >> A >> B >> C >> D;
    for (int h=A-1;h<C;++h){
      for (int w=B-1;w<D;++w){
        ++X.at(h).at(w);
      }
    }

  }


  for (int h=0;h<H;++h){
    int w;
    for (w=0;w<W-1;++w){
      cout << X.at(h).at(w)<< " ";
    }
    cout << X.at(h).at(w) << endl;
  }

}

