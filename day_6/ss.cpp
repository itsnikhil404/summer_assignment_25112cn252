class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        for (int i = 0; i < nums.size() - 1; i++) {
            int minindex = i;

            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] < nums[minindex]) {
                    minindex = j;
                }
            }

            int temp = nums[minindex];
            nums[minindex] = nums[i];
            nums[i] = temp;
        }

        return nums;
    }
};