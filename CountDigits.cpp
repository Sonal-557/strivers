#include <iostream>
using namespace std;

int countDividingDigits(int n) {
    int count = 0;
    int original = n; // Store the original number
    
    while (n > 0) {
        int digit = n % 10; // Extract the last digit
        if (digit != 0 && original % digit == 0) { // Check if the digit is not 0 and divides the number
            count++;
        }
        n /= 10; // Remove the last digit
    }
    
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int result = countDividingDigits(n);
    cout << "Number of digits that divide " << n << " evenly: " << result << endl;
    
    return 0;
}

