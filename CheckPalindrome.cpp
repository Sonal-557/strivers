#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // Negative numbers are not palindromes

        long long reversed = 0; // Use long long to prevent overflow
        int original = x; 

        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit; // Build the reversed number
            x /= 10;
        }

        return original == reversed;
    }
};

int main() {
    Solution sol;

    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (sol.isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}

