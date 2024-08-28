#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static string capitalizeTitle(string title) {
        // Convert the entire title to lowercase 
        transform(title.begin(), title.end(), title.begin(), ::tolower);

        // Initialize a counter to keep track of word length
        int count = 0;

        for (int i = 0; i < title.length(); i++) {
            if (title[i] == ' ') {
                // Reset the counter when a space is encountered
                count = 0;
            } else {
                // Increment the counter for each character in a word
                count++;

                if (count == 3) {
                    // Capitalize the first letter of words with length 3
                    title[i - 2] = title[i - 2] - 32; 
                }
            }
        }

        return title;
    }
};

int main() {
    string x;
    cin >> x;

    // Call the capitalizeTitle function with a sample title
    string val = Solution::capitalizeTitle("The World SUCK");

    cout << endl << val;
}