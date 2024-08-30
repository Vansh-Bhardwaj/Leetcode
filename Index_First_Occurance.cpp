#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static int strStr(string haystack, string needle) {
        // Handle the special case where the needle is empty
        if (needle.empty()) {
            return 0; 
        }

        for (int i = 0; i < haystack.size(); i++) {
            // Check if the current character in the haystack matches the first character of the needle
            if (needle[0] == haystack[i]) {
                int cur = i; // Keep track of the current position in the haystack

                for (int x = 0; x < needle.size(); x++) {
                    // If characters don't match, break the inner loop
                    if (needle[x] != haystack[cur]) {
                        break;
                    } else { // If characters match, move to the next character in both strings
                        cur++;
                    }

                    // If we've reached the end of the needle and all characters matched, return the starting index
                    if (x == needle.size() - 1) {
                        return i;
                    }
                }
            }
        }
        // If the needle is not found, return -1
        return -1;
    }
};

int main() {
    string x, y;
    cin >> x >> y;
    int val = Solution::strStr(x, y);
    cout << endl << val;
    return 0; 
}