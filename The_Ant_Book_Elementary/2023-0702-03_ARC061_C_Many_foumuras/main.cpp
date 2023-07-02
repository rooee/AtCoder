// https://atcoder.jp/contests/arc061/tasks/arc061_a
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

int main() {

  string S; 
  cin >> S;
  const int N=S.size();
  vector<int> v(N,0);
  for (int i=0;i<N;++i){
    v.at(i)=S.at(i)-'0';
  }

  int64_t total=0;
  for (int bit=0;bit<(1<<N-1);++bit){
    int64_t sum=0, acc=v.at(0);
    for (int i=0;i<N-1;++i){
      if (bit&(1<<i)){
        sum+=acc;
        acc=v.at(i+1);
      }else{
        acc=acc*10+v.at(i+1);
      }
    }
    sum+=acc;
//    cout <<"sum="<<sum<<endl;
    total+=sum;
  }
  cout << total << endl;
}
