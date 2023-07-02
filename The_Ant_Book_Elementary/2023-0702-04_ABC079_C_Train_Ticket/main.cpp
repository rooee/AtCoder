// https://atcoder.jp/contests/abc079/tasks/abc079_c
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

int main() {

  string S; 
  cin >> S;
  const int N=4;
  vector<int> v(N,0);
  for (int i=0;i<N;++i){
    v.at(i)=S.at(i)-'0';
  }

  int total=0;
  for (int bit=0;bit<(1<<N-1);++bit){
    int sum=v.at(0);
    for (int i=0;i<N-1;++i){
      if (bit&(1<<i)){
        sum+=v.at(i+1);
      }else{
        sum-=v.at(i+1);
      }
    }
    if (sum==7){
      cout << v.at(0);
      for (int i=0;i<N-1;++i){
        if (bit&(1<<i)){
          cout <<"+";
        }else{
          cout <<"-";
        }
        cout << v.at(i+1);
      }
      cout << "=7" << endl;
      return 0;
    }
  }
}
