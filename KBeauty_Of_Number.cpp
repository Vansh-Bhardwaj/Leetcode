#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
  static  int divisorSubstrings(int num, int k) {
        string div = to_string(num);
        int count = 0;

        for (int i = 0; i <= div.size() - k; i++) { // Ensure substring is within bounds
            string temp = div.substr(i, k);
            int divisor = stoi(temp);

            if (divisor == 0) {
                continue; 
            } else if (num % divisor == 0) {
                count++;
            }
        }
        return count;
    }
};

 int main()
{
int x,num;
cin >> num>>x;
int val = Solution::divisorSubstrings(num,x);
cout << endl << val;
}