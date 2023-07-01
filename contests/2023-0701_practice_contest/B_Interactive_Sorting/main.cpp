// https://atcoder.jp/contests/practice/tasks/practice_2

#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, Q;
  cin >> N >> Q ;

  string s, ans;
  for (int i=0;i<N;++i){
    s+=(char)('A'+i);
  }
  for (int i=0;i<N;++i){
    for (int j=0;j<N-1;j++){
      cout << "? " << s.at(j) << " " << s.at(j+1) << endl << std::flush;
      cin >> ans;
      if (ans==">") swap(s.at(j), s.at(j+1));
    }
  }
  cout << "! " << s << endl << std::flush;
}
