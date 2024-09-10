#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static int removeDuplicates(vector<int> &nums)
    {
        int j = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main()
{
    vector<int> x;
    int count;
    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    int val = Solution::removeDuplicates(x);
    cout << endl
         << val;
}