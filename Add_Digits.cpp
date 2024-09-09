#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
   static int addDigits(int num) {
        if(num<=9)return num;
        int sum=0;
        int x=num;
        while(x){
            sum+=x%10;
            x/=10;
        }
        return addDigits(sum);
    }
};

 int main()
{
int x;
cin >> x;
int val = Solution::addDigits(x);
cout << endl << val;
}