//https://www.hackerrank.com/challenges/plus-minus/problem
//author: Sokojoe, status: Solved

#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector <int> arr) {
    int n = arr.size();
    int a, b, c;
    a = b = c = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            a++;
        }
        else if (arr[i] < 0) {
            b++;
        }
        else {
            c++;
        }
    }
    cout << a/(float)n << endl;
    cout << b/(float)n << endl;
    cout << c/(float)n << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    plusMinus(arr);
    return 0;
}
