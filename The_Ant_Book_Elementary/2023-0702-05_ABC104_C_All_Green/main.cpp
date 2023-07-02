// https://atcoder.jp/contests/abc104/tasks/abc104_c
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

int main() {

  int D;
  int64_t G; 
  cin >> D >> G;
  vector<pair<int, int>> v(D, pair<int, int>(0,0));
  for (int i=0;i<D;++i){
    cin >> v.at(i).first >> v.at(i).second;
  }

  for (auto a: v){
    cout << a.first << ", " << a.second << endl;;
  }

}
