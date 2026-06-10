class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        long long high = 0;
        for (int i = 0; i < nums.size(); i++) {
            high += nums[i];
        }
        while (low <= high) {
            long long mid = (low + high) / 2;
            int count = 1;
            long long sum = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (sum + nums[i] <= mid) {
                    sum += nums[i];
                }
                else {
                    count++;
                    sum = nums[i];
                }
            }

            if (count <= k)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};