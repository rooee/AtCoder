#include <bits/stdc++.h>
using namespace std;

int main () {

  cout << numeric_limits<int>::max() << endl;
  cout << numeric_limits<long>::max() << endl;
  cout << endl;
  cout << (1<<29) << endl;
  cout << log10(1<<29) << endl;
  cout << endl;
  cout << 2*pow(10,4+5+1) << endl;
  cout << float(numeric_limits<int>::max())<<endl;
  cout << float(numeric_limits<long>::max())<<endl;
  cout << endl;

  cout << numeric_limits<int>::max()/pow(10,9) << endl;
  cout << numeric_limits<long>::max()/pow(10,9) << endl;

}
