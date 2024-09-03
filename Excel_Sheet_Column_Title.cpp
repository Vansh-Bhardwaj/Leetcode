#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static string convertToTitle(int columnNumber)
    {
        string result;
        int div = 26;

        while (columnNumber > div)
        {

            int temp = columnNumber % div;

            if (temp == 0)
            {
                temp = div;
                columnNumber--;
            }

            result = char('A' + temp - 1) + result;
            columnNumber /= div;
        }

        result = char('A' + columnNumber - 1) + result;

        return result;
    }
};

int main()
{
    int x;
    cin >> x;
    string val = Solution::convertToTitle(x);
    cout << endl
         << val;
}