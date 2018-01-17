//https://www.hackerrank.com/challenges/utopian-tree/problem
//author: Sokojoe, status: Solved

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int t;
  for (int i = 0; i < n; i++){
    int t;
    cin >> t;
    int tree = 0;
    for (int j = 0; j <= t; j++){
      if (j % 2 == 0){
        tree++;
      }
      else {
        tree *= 2;
      }
    }
    cout << tree << endl;
  }
}
