class Solution {
public:
    void heapify(vector<int>& nums, int n, int i) {
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && nums[left] < nums[smallest])
            smallest = left;

        if (right < n && nums[right] < nums[smallest])
            smallest = right;

        if (smallest != i) {
            swap(nums[i], nums[smallest]);
            heapify(nums, n, smallest);
        }
    }

    void buildMinHeap(vector<int>& nums) {
        int n = nums.size();

        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(nums, n, i);
        }
    }
};