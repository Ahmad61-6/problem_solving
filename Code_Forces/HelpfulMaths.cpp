#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> numbers;
    for (int i = 0; i < s.length(); i += 2) {
        int num = s[i] - '0';
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end());

    cout << numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        cout << "+" << numbers[i];
    }
    
    return 0;
}
