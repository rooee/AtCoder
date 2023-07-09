// https://atcoder.jp/contests/abc104/tasks/abc104_c
// https://qiita.com/drken/items/e77685614f3c6bf86f44
// https://atcoder.jp/contests/abc104/submissions/43330580

#include <bits/stdc++.h>
using namespace std;

const int INF=1<<29;


int main () {
  int D, G;
  cin >> D >> G;
  G/=100;

  vector<int> nump (D), bonus (D);
  int max_score=0;
  for (int i = 0; i < D; ++i) {
    cin >> nump.at (i) >> bonus.at (i);
    bonus.at(i)/=100;
    max_score+=(i+1)*nump.at(i)+bonus.at(i);
  }

  vector<vector<int>> dp(D+1, vector<int>(max_score+1, INF));
  dp.at(0).at(0)=0;

  int nxt;
  for (int i=0;i<D;++i){
    for (int p=0;p<max_score+1;++p){
      for (int j=0;j<nump.at(i);++j){
        nxt=p+(i+1)*j;
//        cout << nxt << ", " ;
        if (nxt<=max_score){
          dp.at(i+1).at(nxt)=min(dp.at(i+1).at(nxt), dp.at(i).at(p)+j);
        }
      }
      nxt=p+(i+1)*nump.at(i)+bonus.at(i);
//      cout << nxt << ", " << endl;
      if (nxt<=max_score){
        dp.at(i+1).at(nxt)=min(dp.at(i+1).at(nxt), dp.at(i).at(p)+nump.at(i));
      }
    }
  }
  int ans=INF;
  for (int p=G;p<max_score+1;++p){
    ans=min(ans,dp.at(D).at(p));
  }
  cout << ans << endl;
}

