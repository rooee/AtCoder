// https://atcoder.jp/contests/atc001/tasks/dfs_a
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

  int H, W;
  vector<string> board;

bool dfs(int h, int w){
  if (h<0||H<=h||w<0||W<=w){
    return false;
  }

  char cur=board.at(h).at(w);
//  cout << h << "," << w << "," << cur << endl;
  switch (cur){
    case 'g':
      return true;
    case 's':
      board.at(h).at(w)='S';
      return dfs(h-1,w) || dfs(h+1,w) || dfs(h,w-1) || dfs(h,w+1) ;
    case '.':
      board.at(h).at(w)='o';
      return dfs(h-1,w) || dfs(h+1,w) || dfs(h,w-1) || dfs(h,w+1) ;
    default:
      return false;
  }
}

int main () {

  cin >> H >> W;
  for (int h = 0; h < H; ++h) {
    string s ;
    cin >> s;
    board.push_back(s);
  }

  // find "s" for start
  int sh, sw;
  for (int h = 0; h < H; ++h) {
    int w=board.at(h).find('s');
    if (w!=std::string::npos){
      sh=h;
      sw=w;
    }
  }

  //start at 's' location.
  if (dfs(sh, sw)){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  /*for (int h = 0; h < H; ++h) {
    cout << board.at(h) << endl;
  }*/
}

