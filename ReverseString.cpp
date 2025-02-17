#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int digit = x % 10;
            x /= 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return 0;
            rev = rev * 10 + digit;
        }
        return rev;
    }
};
int main() {
    Solution sol;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed: " << sol.reverse(num) << endl;
    return 0;
}
