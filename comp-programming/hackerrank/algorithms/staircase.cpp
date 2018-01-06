//https://www.hackerrank.com/challenges/staircase/problem
//author: Sokojoe, status: Solved
#include <bits/stdc++.h>

using namespace std;

void staircase(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (n - j >  i + 1) {
                cout << " ";
            }
            else {
                cout << "#";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    staircase(n);
    return 0;
}
