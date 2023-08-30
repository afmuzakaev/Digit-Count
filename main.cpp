#include <iostream>

int countEvenlyDividingDigits(int num) {
    int count = 0;
    int originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && originalNum % digit == 0) {
            count++;
        }
        num /= 10;
    }

    return count;
}

int main() {
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;

    int result = countEvenlyDividingDigits(N);
    std::cout << "Number of digits that evenly divide " << N << ": " << result << std::endl;

    return 0;
}
