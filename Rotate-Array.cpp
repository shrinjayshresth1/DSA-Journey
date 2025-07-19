class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        reverseDo(nums,0,n-1);
        reverseDo(nums,0,k-1);
        reverseDo(nums,k,n-1);
    }


private:
    void reverseDo(vector<int>&nums, int start, int end){
     while(start<end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
    }
 };