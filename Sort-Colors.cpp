class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_zeros=0;
        int count_ones=0;
        int count_twos=0;


        for (int i=0;i<nums.size();i++){
            if(nums[i]==0) count_zeros++;
            else if (nums[i]==1) count_ones++;
            else if (nums[i]==2) count_twos++;
        }
        int index=0;
        while(count_zeros--){
            nums[index]=0;
            index++;
        }

        while(count_ones--){
            nums[index]=1;
            index++;
        }

        while(count_twos--){
            nums[index]=2;
            index++;
        }
    }
};