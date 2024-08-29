#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
    static int lengthOfLastWord(string s) {

        int length = 0;
        int i = s.length() - 1;
        //check if the current char is  space
        while (i>=0 && s[i] == ' ' ) {
            i--;
        }
        //check if the current char is not space
        while (i>=0 && s[i] != ' ' )  {
            length++;
            i--;
        }
        //return the length of last word

        return length;
    }
};

 int main()
{
string x;
cin >> x;
int val = Solution::lengthOfLastWord(x);
cout << endl << val;
}