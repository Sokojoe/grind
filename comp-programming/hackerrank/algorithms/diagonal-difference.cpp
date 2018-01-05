//https://www.hackerrank.com/challenges/diagonal-difference/problem
//author: Sokojoe, status: Solved
#include <bits/stdc++.h>
#include <stdlib.h>     

using namespace std;

int diagonalDifference(vector < vector<int> > a) {
    int leftsum = 0;
    int rightsum = 0;
    int n = a.size() - 1;
    for (int i = 0; i <= n; i++){
        leftsum += a[i][i];
        rightsum += a[i][n-i];
    }
    return abs(leftsum - rightsum);
}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(a);
    cout << result << endl;
    return 0;
}
