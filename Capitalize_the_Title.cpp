#include <bits/stdc++.h> 

using namespace std; 

class Solution {
public:
    static string capitalizeTitle(string title) {
        transform(title.begin(),title.end(),title.begin(),::tolower);
        int count=0;

        for(int i=0;i<title.length();i++){
            if(title[i]==' '){
                count=0;
            }
            else{
                count++;
                if(count==3){
                    title[i-2]=title[i-2]-32;
                }
            }
    }

        return title;
    }
};

 int main()
{
string x;
cin >> x;
string val = Solution::capitalizeTitle("The World SUCK");
cout << endl << val;
}