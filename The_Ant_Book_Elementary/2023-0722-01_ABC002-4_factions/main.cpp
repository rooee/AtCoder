// https://atcoder.jp/contests/abc002/tasks/abc002_4
// https://qiita.com/drken/items/e77685614f3c6bf86f44

#include <bits/stdc++.h>
using namespace std;

bool sub(const vector <vector <int>> rel, const vector<int>fc){
    for (int i=0;i<fc.size();++i){
        for (int j=i+1;j<fc.size();++j){
            if (rel.at(fc.at(i)).at(fc.at(j))==0){
                return false;
            }
        }
    }
    return true;
}


int main () {

  int N, M;
  cin >> N >> M;
  vector <vector <int>> rel(N, vector <int> (N,0));

    for (int i = 0; i < M; ++i) {
        int x, y;
        cin >> x >> y ;
        if (x<y){
            rel.at(x-1).at(y-1)=1;
        }else{
            rel.at(y-1).at(x-1)=1;
        }
    }
/*
    for (int i=0;i<N;++i){
        for (int j=0;j<N;++j){
            cout << rel.at(i).at(j) << ", ";
        }
        cout << endl;
    }
*/
    int ans=0;
    for (int i=0;i<pow(2,N);++i){
        vector <int>fc;
        for (int j=0;j<N;++j){
            if (i>>j&1){
                fc.push_back(j);
            } 
        }
        if (fc.size()>0){
            /*
            for (int j=0;j<fc.size();++j){
                cout << fc.at(j) << ", " ;
            }
            cout << endl;
            */
            if (sub (rel, fc)){
                if (ans<fc.size()){
                    ans=fc.size();
                }
            }
        }
    }
    cout << ans << endl;
}

