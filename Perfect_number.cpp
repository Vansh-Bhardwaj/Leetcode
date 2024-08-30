#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
    static bool checkPerfectNumber(int num) {
        int sum=1;

        if(num==1){
            return 0;}
        for (int i=2;i*i<num;i++){
            if(num%i==0){
                sum+=i;
                sum+=num/i;
            }
        }
        return sum==num;
    }
};

 int main()
{
int x;
cin >> x;
int val = Solution::checkPerfectNumber(x);
cout << endl << val;
}