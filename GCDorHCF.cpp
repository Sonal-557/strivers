#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to compute GCD using Euclidean algorithm
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Function to compute LCM
    int lcm(int a, int b) {
        return (a * b) / gcd(a, b);
    }

    // Function to return both LCM and GCD using a vector
    vector<int> lcmAndGcd(int a, int b) {
        vector<int> result;
        result.push_back(lcm(a, b)); // Push LCM to the vector
        result.push_back(gcd(a, b)); // Push GCD to the vector
        return result;
    }
};

int main() {
    Solution sol;
    
    // Input values for a and b
    int a = 5, b = 10;

    // Getting the result
    vector<int> result = sol.lcmAndGcd(a, b);

    // Output in the required format
    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;
    cout << "Explanation: LCM of " << a << " and " << b << " is " << result[0] 
         << ", while their GCD is " << result[1] << "." << endl;

    return 0;
}

