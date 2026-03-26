#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int>& nums, int k) {

    int n = nums.size();

    int windowSum = 0;

    // first window
    for(int i = 0; i < k; i++){
        windowSum += nums[i];
    }

    int maxSum = windowSum;

    // slide window
    for(int i = k; i < n; i++){
        windowSum += nums[i];
        windowSum -= nums[i-k];

        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {

    vector<int> nums = {2,1,5,1,3,2};
    int k = 3;

    cout << maxSumSubarray(nums, k);

    return 0;
}