#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int len = nums.size();
        for (int i = 0; i < len; i++) {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};

int main() {

    vector<int> arr = {1,2,3,4};
    Solution s;
    vector<int> result = s.getConcatenation(arr);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
}