// https://atcoder.jp/contests/abc104/tasks/abc104_c
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

void evaluation (const vector<int> &nump, const vector<int> &bonus, 
                const int &D, const int &G, 
                vector<int> vcontainer, int &maxval) {
  int points = 0, counts = 0;
  for (int i = 0; i < D; ++i) {
    counts += vcontainer.at (i);
    points += (i + 1) * 100 * vcontainer.at (i);
    if (vcontainer.at (i) == nump.at (i)) {
      points += bonus.at (i);
    }
  }
  if (G <= points) {
    if (counts < maxval) {
      maxval = counts;
    }
  }
}

void build_vcontainer (const vector<int> &nump, const vector<int> &bonus, 
                       const int &D, const int &G, 
                       int level, vector<int> vcontainer, int &maxval) {
  if (level == D) {
    evaluation(nump, bonus, D, G, vcontainer, maxval);
    return;
  }
  for (int i = 0; i < nump.at (level) + 1; ++i) {
    vector<int> tmp = vcontainer;
    tmp.push_back (i);
    build_vcontainer (nump, bonus, D, G, level + 1, tmp, maxval);
  }
}

int main () {
  int D, G;
  cin >> D >> G;
  vector<int> nump (D), bonus (D), vcontainer;
  for (int i = 0; i < D; ++i) {
    cin >> nump.at (i) >> bonus.at (i);
  }
  int maxval = accumulate (nump.begin (), nump.end (), 0);
  build_vcontainer (nump, bonus, D, G, 0, vcontainer, maxval);
  cout << maxval << endl;
}
