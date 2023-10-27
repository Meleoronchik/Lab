#include <iostream>
#include <string>

std::string addStars(const std::string& input, int index) {

    if (index == input.length() - 1) {
        return std::string(1, input[index]);
    }

    
    return input.substr(index, 1) + '*' + addStars(input, index + 1);
}

int main() {
    std::string input_string;
    std::cin >> input_string;

    std::string result_string = addStars(input_string, 0);

    std::cout << result_string << std::endl;

    return 0;
}
