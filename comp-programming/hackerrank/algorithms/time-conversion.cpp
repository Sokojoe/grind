//https://www.hackerrank.com/challenges/time-conversion/problem
//author: Sokojoe, status: Solved
#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    if (s.substr(8,2) == "AM"){
        if (s.substr(0, 2) == "12"){
            return "00" + s.substr(2, 6);
        }
        return s.substr(0, 8);
    }
    if (s.substr(0, 2) == "12"){
        return s.substr(0, 8);
    }
    int hour = stoi(s.substr(0, 2)) + 12;
    return to_string(hour) + s.substr(2, 6); 
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
