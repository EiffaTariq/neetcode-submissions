class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        if(size == 0)
        {
            return -1;
        }
        if(nums[0] == target){
            return 0;
        }
        if(size == 1 && nums[0] != target){
            return -1;
        }
        if(nums[0] - nums[1] == 1){
        int index;
        if(nums[0]> size){
            index = nums[0] - size + 1;

        }
        else if(nums[0] < size)
        {
        index = size - nums[0] + 1;
        }
        if(index ==size){
            index--;
        }
        if(nums[index]==target && index < nums.size()){
            return index;

        }
        else{
            return -1;
        }
        }
        else{
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == target){
                    return i;
                }
            }
            return -1;
        }
    }
};
