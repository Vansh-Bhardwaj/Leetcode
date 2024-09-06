#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
   static char findTheDifference(string s, string t) {
        int diff = 0;
        int len = s.size();

        for (int i = 0; i < len; i++) {
            diff = t[i] - s[i] + diff;
        }
        diff = diff + t[len];

        return (char(diff));
    }
};

 int main()
{
string x,s;
cin >> x>>s;
char val = Solution::findTheDifference(x,s);
cout << endl << val;
}