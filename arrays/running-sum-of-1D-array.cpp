#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int running_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            nums[i] += running_sum;
            running_sum = nums[i];
        }
        return nums;
    }
};

int main() {

    vector<int> arr = {1,2,3,4};
    Solution s;
    vector<int> result = s.runningSum(arr);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
}