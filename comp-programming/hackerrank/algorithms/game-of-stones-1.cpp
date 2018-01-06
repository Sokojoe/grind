//https://www.hackerrank.com/challenges/game-of-stones-1/problem
//author: Sokojoe, status: Solved
#include <bits/stdc++.h>

using namespace std;

int main() {
    //map results to a vector for efficiency
    vector<bool> results(101, 0);
    results[0] = false;
    results[1] = false;
    results[2] = true;
    results[3] = true;
    results[4] = true;
    results[5] = true;
    for (int i = 6; i <= 100; i++){
        // A player has a winning move if one of their 3 moves results in opponent not having a winning move
        if (!results[i-2]||!results[i-3]||!results[i-5]){
            results[i] = true;
        }
    }
    
    int t;
    cin >> t;
    for(int a = 0; a < t; a++){
        int n;
        cin >> n;
        if (results[n]) cout << "First" << endl;
        else cout << "Second" << endl;
    }
    return 0;
}
