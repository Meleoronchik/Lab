#include <iostream>


int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int ch1, ch2;
    std::cin >> ch1 >> ch2;

    int result = nod(ch1, ch2);

    std::cout << result << std::endl;

    return 0;
}
