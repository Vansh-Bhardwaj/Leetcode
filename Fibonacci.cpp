#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int static fib(int n) {
        // Initialize variables to store the first two Fibonacci numbers
        int result, first = 0;
        int second = 1;

        // Base case: If n is 0, return 0
        if (n == 0) {
            return 0;
        } else {
            // Iterate from the third Fibonacci number up to the nth
            for (int sum = 2; sum <= n; sum++) {
                // Calculate the next Fibonacci number
                result = first + second;

                // Update the first and second numbers for the next iteration
                first = second;
                second = result;
            }

            // Return the nth Fibonacci number
            return second;
        }
    }
};

int main() {
    int x;
    cin >> x;

    // Call the fib function to calculate the Fibonacci number at the given index
    int val = Solution::fib(x);

    // Print the result
    cout << endl << val;
}