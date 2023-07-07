// https://atcoder.jp/contests/abc104/tasks/abc104_c
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

void build_vcontainer (const vector<int> &nump, const vector<int> &bonus, 
                       const int &D, const int &G, 
                       int level, int &maxval, int points, int counts) {
  if (level == D) {
    if (G <= points) {
      if (counts < maxval) {
        maxval = counts;
      }
    }
    return;
  }
  for (int i = 0; i < nump.at (level) + 1; ++i) {
    int tmpppoints=(level+1)*100*i;
    if (i == nump.at (level)) {
      tmpppoints += bonus.at (level);
    }
    build_vcontainer (nump, bonus, D, G, level + 1, maxval, points+tmpppoints, counts+i);
  }
}

int main () {
  int D, G;
  cin >> D >> G;
  vector<int> nump (D), bonus (D);
  for (int i = 0; i < D; ++i) {
    cin >> nump.at (i) >> bonus.at (i);
  }
  int maxval = accumulate (nump.begin (), nump.end (), 0);
  build_vcontainer (nump, bonus, D, G, 0, maxval, 0,0);
  cout << maxval << endl;
}
