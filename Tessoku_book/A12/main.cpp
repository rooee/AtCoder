// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_l

#include <bits/stdc++.h>
using namespace std;

int main () {

  int N, K;
  cin >> N >> K ;
  vector<int> A(N);

  for (int i=0;i<N;++i){
    cin >> A.at(i);
  }

/*
  int t=0, sum=0;;
  while(sum<K){
    ++t;
    sum=0;
    for (int i=0;i<N;++i){
      sum+=(t)/A.at(i);
    } 
//    cout << "t, sum=" << t << ", " << sum << endl;
  }
  cout << t << endl;

*/

  int min=1, max=1000000000, t;
  int64_t k0, k1;
  while(1){
    t=(min+max)/2;
    k0=k1=0;
    for (int i=0;i<N;++i){
      k0+=(t-1)/A.at(i);
      k1+=(t  )/A.at(i);
    }
//    cout << "t, k0, k1=" << t << ", " << k0 << ", "  << k1 << endl;

    if (k1<K){
      min=t;
    } else if (k0>=K){
      max=t;
    } else {
      break;
    }
  }
  cout << t << endl;

}

