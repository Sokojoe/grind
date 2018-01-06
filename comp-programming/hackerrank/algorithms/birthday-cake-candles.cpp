//https://www.hackerrank.com/challenges/birthday-cake-candles/problem
//author: Sokojoe, status: Solved
#include <bits/stdc++.h>

using namespace std;

long birthdayCakeCandles(long n, vector <long> ar) {
    long top = 0;
    long amt = 0;
    for (long i = 0; i < n; i++){
        if (ar[i] == top){
            amt++;
        }
        else if (ar[i] > top){
            top = ar[i];
            amt = 1;
        }
    }
    return amt;
}

int main() {
    long n;
    cin >> n;
    vector<long> ar(n);
    for(long ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
