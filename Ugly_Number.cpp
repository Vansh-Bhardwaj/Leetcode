#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static bool isUgly(int n)
    {
        if (n <= 0)
        {
            return false;
        }

        while (n % 2 == 0)
        {
            n /= 2;
        }
        while (n % 3 == 0)
        {
            n /= 3;
        }
        while (n % 5 == 0)
        {
            n /= 5;
        }

        return n == 1;
    }
};

int main()
{
    int x;
    cin >> x;
    int val = Solution::isUgly(x);
    cout << endl
         << val;
}