#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static int titleToNumber(string columnTitle)
    {
        int ans = 0;
        for (int i = 0; i < columnTitle.length(); i++)
        {
            ans = ans * 26 + (columnTitle[i] - 'A' + 1);
        }

        return ans;
    }
};

int main()
{
    string x;
    cin >> x;
    int val = Solution::titleToNumber(x);
    cout << endl
         << val;
}