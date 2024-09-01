#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
   static int theMaximumAchievableX(int num, int t) {

        return num+(2*t);
        
    }
};

 int main()
{
int x,y;
cin >> x>>y;
int val = Solution::theMaximumAchievableX(x,y);
cout << endl << val;
}