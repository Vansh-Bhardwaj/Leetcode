#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
    static int numOfPairs(vector<string>& nums, string target) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i!=j && nums[i] + nums[j] == target ) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    int numStrings;
    string target;

    cout << "Enter the number of strings: ";
    cin >> numStrings;

    vector<string> nums(numStrings); // Create a vector to store the strings

    cout << "Enter the strings, one per line:\n";
    for (int i = 0; i < numStrings; ++i) {
        cin >> nums[i]; 
    }

    cout << "Enter the target string: ";
    cin >> target;

    int val = Solution::numOfPairs(nums, target);
    cout << "\nNumber of pairs: " << val << endl;

    return 0;
}