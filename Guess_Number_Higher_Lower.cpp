#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static int guess(int num, int target) {
        if (num == target) {
            return 0;
        } else if (num > target) {
            return -1;
        } else {
            return 1;
        }
    }

    static int guessNumber(int n, int target) {
        int front = 1;
        int last = n;

        while (front <= last) {
            int mid = front + (last - front) / 2;

            int result = guess(mid, target);

            if (result == 0) {
                return mid;
            } else if (result == -1) {
                last = mid - 1; 
            } else if (result == 1) {
                front = mid + 1; 
            }
        }

        return 0; // Target not found (shouldn't happen in this scenario)
    }
};

int main() {
    int x, y; // x: range, y: target number
    cout<<"Input Your Guess - ";
    cin >> x ;
    cout<<"Input Target Number - ";
    cin>> y;

    int val = Solution::guessNumber(y,x);
    cout << endl << val;

}