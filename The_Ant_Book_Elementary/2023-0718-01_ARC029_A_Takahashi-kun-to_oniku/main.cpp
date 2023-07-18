// https://atcoder.jp/contests/arc029/tasks/arc029_1
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

const int INF=1<<29;


int main () {
  int N;
  cin >> N;

  vector<int> t (N);
  for (int i = 0; i < N; ++i) {
    cin >> t.at (i) ;
  }

  int ans=INF, anst;
  for (int i=0;i<pow(2,N);++i){
    int A=0, B=0;
      for (int j=0;j<N;++j){
        if (i>>j&1){
            A+=t.at(j);
        } else {
            B+=t.at(j);
        }
      }
    anst=max(A,B);
    if (anst<ans){
        ans=anst;
    }
  }
  cout << ans << endl;
}

