#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static bool detectCapitalUse(string word) {

        for (int i = 1; i < word.length(); i++) {
            if (isupper(word[0])) { // First letter is uppercase
                if (islower(word[1])) { // Second letter is lowercase
                    if (isupper(word[i])) { 
                        return false; // Any subsequent letter is uppercase
                    }
                } else { // Second letter is uppercase
                    if (islower(word[i])) { 
                        return false; // Any subsequent letter is lowercase
                    }
                }
            } else { // First letter is lowercase
                if (isupper(word[i])) { 
                    return false; // Any subsequent letter is uppercase
                }
            }
        }

        return true;
    }
};

int main() {
    string x;
    cin >> x;
    int val = Solution::detectCapitalUse(x);
    cout << endl << val;
}