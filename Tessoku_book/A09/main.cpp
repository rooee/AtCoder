// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_i

#include <bits/stdc++.h>
using namespace std;

int main () {

  int H, W,N;
  int A, B, C, D;
  cin >> H >> W >>N ;
  vector <vector <int>> X(H+2, vector<int>(W+2,0));

  for (int i=0;i<N;++i){
    cin >> A >> B >> C >> D;
      X.at(A  ).at(B)  +=1;
      X.at(C+1).at(D+1)+=1;
      X.at(C+1).at(B  )-=1;
      X.at(A  ).at(D+1)-=1;
  }
/*
  for (int h=0;h<H+2;++h){
    int w;
    for (w=0;w<W+1;++w){
      cout << X.at(h).at(w)<< " ";
    }
    cout << X.at(h).at(w) << endl;
  }
*/

  for (int w=1;w<W+2;++w){
    for (int h=1;h<H+2;++h){
      X.at(h).at(w)+=X.at(h-1).at(w);
    }
  }
  for (int h=1;h<H+2;++h){
    for (int w=1;w<W+2;++w){
      X.at(h).at(w)+=X.at(h).at(w-1);
    }
  }

  for (int h=1;h<H+1;++h){
    int w;
    for (w=1;w<W;++w){
      cout << X.at(h).at(w)<< " ";
    }
    cout << X.at(h).at(w) << endl;
  }

}

