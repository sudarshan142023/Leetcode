class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minIndex = 0;
        int maxIndex = 0;

        // Find minimum and maximum indices
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minIndex])
                minIndex = i;

            if (nums[i] > nums[maxIndex])
                maxIndex = i;
        }

        // Make sure minIndex is the smaller index
        int small = min(minIndex, maxIndex);
        int large = max(minIndex, maxIndex);

        // Case 1: Remove both from front
        int front = large + 1;

        // Case 2: Remove both from back
        int back = n - small;

        // Case 3: Remove from both sides
        int both = (small + 1) + (n - large);

        return min({front, back, both});
    }
};