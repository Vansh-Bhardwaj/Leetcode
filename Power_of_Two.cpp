#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
   static bool isPowerOfTwo(int n) {


        while (n != 0) {

            if (n % 2 == 0) {
                n /= 2;
            } 
            else if (n==1){
                return true;
            }
            
            else  {
                return false;
            }
        }
        return n == 1;
    }
};

 int main()
{
int x;
cin >> x;
int val = Solution::isPowerOfTwo(x);
cout << endl << val;
}