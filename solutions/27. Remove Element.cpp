class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        erase(nums, val);
        return nums.size();
    }
};
// This is a C++ 20 solution, quite cheaty so I also solved it regularly below

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
