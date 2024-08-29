#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
    static int	Sqrt(int inp){
        int odd = 1;
        float count =0;
        while( inp >=0){
            inp -= odd;
            odd+=2;
            count++;
            if(inp<0){
                count--;
            }
        }
        return count;

}

};

 int main()
{
int x;
cin >> x;
int val = Solution::Sqrt(x);
cout << endl << val;
}