//https://www.hackerrank.com/challenges/mini-max-sum/problem
//author: Sokojoe, status: Solved
#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector <long> arr) {
    long low = arr[0];
    long high = 0;
    long sum = 0;
    for (int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if (arr[i] < low){
            low = arr[i];
        }
        else if(arr[i] > high){
            high = arr[i];
        }
    }
    cout << sum - high << " " << sum - low;
}

int main() {
    vector<long> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    miniMaxSum(arr);
    return 0;
}
