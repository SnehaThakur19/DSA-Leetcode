class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if (1LL * m * k > bloomDay.size())
            return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        while (low <= high) {
            int mid = (low + high) / 2;
            int bouquets = 0;
            int cnt = 0;
            for (int i = 0; i < bloomDay.size(); i++) {

                if (bloomDay[i] <= mid)
                    cnt++;
                else
                    cnt = 0;

                if (cnt == k) {
                    bouquets++;
                    cnt = 0;
                }
            }

            if (bouquets >= m)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};
