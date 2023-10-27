#include <iostream>
using namespace std;

char findMaxDigit(string s, int index = 0, char maxDigit = '0') {
    if (index >= s.length()) {
        return maxDigit;
    }
    if (s[index] > maxDigit) {
        maxDigit = s[index];
    }
    return findMaxDigit(s, index + 1, maxDigit);
}

int main() {
    string input;
    cin >> input;
    char result = findMaxDigit(input);
    cout << result << endl;
    return 0;
}
