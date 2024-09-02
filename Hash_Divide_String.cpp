#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static string stringHash(string s, int k)
    {
        int l = s.length();
        string result;
        char letter;
        int len = s.size();

        for (int i = 0; i < len; i = i + k)
        {
            int sum = 0;
            for (int j = i; j < i + k; j++)
            {

                letter = s[j];

                sum = sum + int(letter) - int('a');
            }

            sum = sum % 26;

            letter = char('a' + sum);

            result = result + letter;
        }
        return result;
    }
};

int main()
{
    int x;
    string s;
    cin >> s>>x;

    string val = Solution::stringHash(s, x);
    cout << endl
         << val;
}