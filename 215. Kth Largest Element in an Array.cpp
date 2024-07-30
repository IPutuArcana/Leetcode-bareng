class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();  // Menggunakan .size() untuk menghitung ukuran vector
        std::sort(nums.begin(), nums.end(), greater<int>());
        return nums[k - 1]; 
    }
};
