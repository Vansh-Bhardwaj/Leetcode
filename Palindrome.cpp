#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool isPalindrome(string s) {
        int len = s.length(); // Get the original string length
        int j = 0;
        int n = s.size(); // Get the size of the string (same as length)
        string removedstr, finalstr; 

        // Convert all uppercase letters to lowercase
        for (j = 0; j < n; j++) {
            if (s[j] >= 'A' && s[j] <= 'Z') {
                s[j] = s[j] + 32; // Convert uppercase to lowercase by adding 32 to ASCII value
            }
        }

        // Remove non-alphanumeric characters and create a new string
        for (j = 0; j < n; j++) {
            if (s[j] >= 'a' && s[j] <= 'z') {
                removedstr += s[j]; // Append only lowercase letters to the new string
            }
        }

        int lenstr = removedstr.length(); // Get the length of the cleaned string
        finalstr = removedstr; // Create a copy of the cleaned string for reversal

        // Reverse the cleaned string
        for (int i = 0; i < lenstr / 2; i++) {
            swap(finalstr[i], finalstr[lenstr - i - 1]); 
        }

        // Print the intermediate results for debugging
        cout << "removed string = " << removedstr << endl;
        cout << "reversed string = " << finalstr << endl;

        // Check if the cleaned string is equal to its reversed version
        return removedstr == finalstr; 
    }
};

int main() {
    string s;
    s = "A man, a plan, a canal: Panama";
    bool sol = Solution::isPalindrome(s);
    cout << "Is Palindrome: " << sol << endl;
}