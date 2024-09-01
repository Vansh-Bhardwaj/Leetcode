#include <bits/stdc++.h> 

using namespace std; 



//original try

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int div = 1;  // Variable to store the current digit being checked
        vector<int> out; // Vector to store the self-dividing numbers found

        while (left <= right) { // Iterate through the range of numbers
            if (left == 0) {
                return out; // Return an empty vector if left is 0 (0 is not self-dividing)
            }

            int n = left;  // Copy of the current number for manipulation
            int count = 0; // Counter for the number of digits in the current number
            int test = 0;  // Counter for the number of successful divisibility checks

            // Count the number of digits in the current number
            while (n != 0) {
                n = n / 10;
                ++count;
            }

            n = left; // Reset n to the original number

            // Iterate through each digit of the number
            for (int j = 0; j < count; j++) {
                div = n % 10; // Extract the last digit

                if (div == 0) {
                    break; // If any digit is 0, the number is not self-dividing, so break the loop
                } else if (left % div == 0) { // Check if the original number is divisible by the current digit
                    n /= 10; // Remove the last digit from n
                    ++test;  // Increment the successful divisibility check counter
                } else {
                    break; // If not divisible, the number is not self-dividing, so break the loop
                }
            }

            // If all digits were successfully checked for divisibility
            if (test == count) {
                out.push_back(left); // Add the number to the output vector
            }

            ++left; // Move to the next number in the range
        }

        return out; // Return the vector of self-dividing numbers
    }
};





//optimized

// class Solution {
// public:
//     static bool isSelfDividing(int number) {
//         int originalNumber = number;
//         while (number > 0) {
//             int digit = number % 10; // Extract the last digit
//             if (digit == 0 || originalNumber % digit != 0) { 
//                 return false; // Not self-dividing if digit is 0 or not a divisor
//             }
//             number /= 10; // Remove the last digit
//         }
//         return true; 
//     }

//     static vector<int> selfDividingNumbers(int left, int right) {
//         vector<int> result;
//         for (int number = left; number <= right; number++) {
//             if (isSelfDividing(number)) {
//                 result.push_back(number);
//             }
//         }
//         return result;
//     }
// };



int main() {
    int left, right;

    cout << "Enter the left bound of the range: ";
    cin >> left;

    cout << "Enter the right bound of the range: ";
    cin >> right;

    Solution solution;
    vector<int> selfDividingNums = solution.selfDividingNumbers(left, right);

    cout << "Self-dividing numbers in the range [" << left << ", " << right << "]: ";
    for (int num : selfDividingNums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}