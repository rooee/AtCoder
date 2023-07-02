// https://atcoder.jp/contests/arc004/tasks/arc004_1
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

int main() {

  int N; 
  cin >> N;
  vector <vector <int>> points(N, vector <int> (2));

  for (int i=0;i<N;++i){
    cin >> points.at(i).at(0) >> points.at(i).at(1);
  }

  double len=0.;

  for (int i=0;i<N;++i){
    for (int j=i;j<N;++j){
      double norm=pow((points.at(i).at(0)-points.at(j).at(0)),2)+\
                 pow((points.at(i).at(1)-points.at(j).at(1)),2);
      if (norm>len){
        len=norm;
      } 
    }
  }
  cout << std::fixed << std::setprecision(6) << sqrt(len) << endl;
}
