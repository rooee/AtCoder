// https://atcoder.jp/contests/abc175/tasks/abc175_b
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

int main() {

  int N; 
  cin >> N;
  vector<int64_t> L(N);

  for (int i=0;i<N;++i){
    cin >> L.at(i);
  }
  sort(L.begin(), L.end());
  int counter=0;

  for (int i=0;i<N;++i){
    for (int j=0;j<i;++j){
      for (int k=0;k<j;++k){
        if (L.at(k)!=L.at(j)&&L.at(j)!=L.at(i)){
          if (L.at(k)+L.at(j)>L.at(i)){
            ++counter;
          }
        }
      }
    }
  }
  cout << counter << endl;
}
