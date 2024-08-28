#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool isPalindrome(string s) {
        int len = s.length();
        int j = 0;
        int n = s.size();
        string removedstr, finalstr; 

        for (j = 0; j < n; j++) {
            if (s[j] >= 'A' && s[j] <= 'Z') {
                s[j] = s[j] + 32;
            }
        }

        for (j = 0; j < n; j++) {
            if (s[j] >= 'a' && s[j] <= 'z') {
                removedstr += s[j];
            }
        }

        int lenstr = removedstr.length();
        finalstr = removedstr; 

        for (int i = 0; i < lenstr / 2; i++) {
            swap(finalstr[i], finalstr[lenstr - i - 1]);
        }

        cout << "removed string = " << removedstr << endl;
        cout << "reversed string = " << finalstr << endl;

        return removedstr == finalstr; 
    }
};

int main() {
    string s;
    s = "A man, a plan, a canal: Panama";
    bool sol = Solution::isPalindrome(s);
    cout << "Is Palindrome: " << sol << endl;
}


