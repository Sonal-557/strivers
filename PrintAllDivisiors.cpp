#include <iostream>
using namespace std;
// Function to compute sum of divisors for a single number
long long F(int num) {
    long long sum = 0;
    for (int d = 1; d * d <= num; d++) {
        if (num % d == 0) {
            sum += d;
            if (d != num / d) sum += num / d;  // Add the pair divisor
        }
    }
    return sum;
}

// Function to compute SF(i) for 1 to n using brute force
long long sumOfDivisorsBruteForce(int n) {
    long long totalSum = 0;
    for (int i = 1; i <= n; i++) {
        totalSum += F(i);
    }
    return totalSum;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    cout << "S F(i) from 1 to " << n << " (Brute Force) is: " << sumOfDivisorsBruteForce(n) << endl;

    return 0;
}

