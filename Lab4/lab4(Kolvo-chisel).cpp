#include <iostream>
#include <string>

int countDigits(const std::string& str, int index) {
    if (index >= str.length()) {
        return 0;
    }
    return std::isdigit(str[index]) + countDigits(str, index + 1);
}

int main() {
    std::string input_string;
    std::cin >> input_string;

    int digit_count = countDigits(input_string, 0);

    std::cout << digit_count << std::endl;

    return 0;
}