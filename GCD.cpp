#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGCD(const vector<int>& nums) {
    int minNum = *min_element(nums.begin(), nums.end());
    int maxNum = *max_element(nums.begin(), nums.end());
    return gcd(minNum, maxNum);
}

int main() {
    vector<int> nums = {2, 5, 6, 9, 10}; 
    cout << "GCD: " << findGCD(nums) << endl; 
    
    return 0;
}