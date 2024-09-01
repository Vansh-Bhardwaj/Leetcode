#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
    static int minimumOperations(vector<int>& nums) {
        int result =0;
        for(int i =0;i<nums.size();i++){

             if(nums[i]!=0 && nums[i]%3!=0){
                result = result + 1;
             }
        }
        return result;
    }
};

int main() {
    int n;
    cin >> n; // Read the size of the vector

    vector<int> nums(n); // Create a vector of size n

    for (int i = 0; i < n; ++i) {
        cin >> nums[i]; // Read elements of the vector
    }

    int result = Solution::minimumOperations(nums);
    cout << endl << result << endl;

    return 0;
}