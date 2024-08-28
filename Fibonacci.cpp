#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
    int static fib(int n) {
        int result,first = 0;
        int second=1;
        if(n==0){
            return 0;
        }

        else{
            for(int sum=2;sum<=n;sum++){
             result = first+second;
            first = second;
            second=result;


           
            }
             return second;

        }
    }

};

 int main()
{
int x;
cin >> x;
int val = Solution::fib(x);
cout << endl << val;
}