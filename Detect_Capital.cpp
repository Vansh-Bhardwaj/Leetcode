#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static bool detectCapitalUse(string word) {
        
        // Iterate through the word starting from the second character 
        for (int i = 1; i < word.length(); i++) {

            // Check if the first letter is uppercase
            if (word[0] >= 'A' && word[0] <= 'Z') { 

                // Check if the second letter is lowercase
                if (word[1] >= 'a' && word[1] <= 'z') { 

                    // If any subsequent letter is uppercase, return false
                    if (word[i] >= 'A' && word[i] <= 'Z') { 
                        return false;
                    }
                } 
                else { 
                    // If the second letter is uppercase and any subsequent letter is lowercase, return false
                    if (word[i] >= 'a' && word[i] <= 'z') { 
                        return false;
                    }
                }
            } 
            else { 
                // If the first letter is lowercase and any subsequent letter is uppercase, return false
                if (word[i] >= 'A' && word[i] <= 'Z') { 
                    return false;
                }
            }
        }

        // If all checks pass, the word has correct capitalization
        return true; 
    }
};

int main() {
    string x;
    cin >> x;
    int val = Solution::detectCapitalUse(x);
    cout << endl << val;
}