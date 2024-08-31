#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static bool isHappy(int n)
    {
        int x, sum = 0;
        while (n != 0)
        {
            x = n % 10;
            n /= 10;
            sum = sum + (x * x);
        }
        if (sum == 1)
        {
            return 1;
        }
        else if (sum == 4)
        {
            return 0;
        }
        return isHappy(sum);
    }
};

int main()
{
    int x;
    cin >> x;
    int val = Solution::isHappy(x);
    cout << endl
         << val;
}