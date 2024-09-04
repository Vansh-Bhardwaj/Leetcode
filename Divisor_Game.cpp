#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
    static bool divisorGame(int n) { 
        return n % 2 == 0;
    }
};

 int main()
{
int x;
cin >> x;
int val = Solution::/* funtion name*/(x);
cout << endl << val;
}