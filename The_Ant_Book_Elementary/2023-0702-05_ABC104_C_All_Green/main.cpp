// https://atcoder.jp/contests/abc104/tasks/abc104_c
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

void sub2 (const vector<int> &nump, const vector<int> &bonus, const int &D,
           const int &G, vector<int> solved, int &maxval) {
  int points = 0, counts = 0;
  for (int i = 0; i < D; ++i) {
    counts += solved.at (i);
    points += (i + 1) * 100 * solved.at (i);
    if (solved.at (i) == nump.at (i)) {
      points += bonus.at (i);
    }
  }
  if (G <= points) {
    if (counts < maxval) {
      maxval = counts;
    }
/*
    for (int i = 0; i < D; ++i) {
      cout << solved.at (i) << ", ";
    }
    cout << endl;
    cout << "point=" << points << ", counts=" << counts << endl;
*/
  }
}

void sub (const vector<int> &nump, const vector<int> &bonus, const int &D,
          const int &G, int l, vector<int> solved, int &maxval) {
  if (l == D) {
    sub2 (nump, bonus, D, G, solved, maxval);
    return;
  }
  for (int i = 0; i < nump.at (l) + 1; ++i) {
    vector<int> tmp = solved;
    tmp.push_back (i);
    sub (nump, bonus, D, G, l + 1, tmp, maxval);
  }
}

int main () {
  int D, G;
  cin >> D >> G;
  vector<int> nump (D), bonus (D), solved;
  for (int i = 0; i < D; ++i) {
    cin >> nump.at (i) >> bonus.at (i);
  }
  int maxval = accumulate (nump.begin (), nump.end (), 0);
  sub (nump, bonus, D, G, 0, solved, maxval);
  cout << maxval << endl;
}
