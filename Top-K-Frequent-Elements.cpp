class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<vector<int>>frequencyBucket(nums.size()+1);

        //Populate the hashmaps
        for(auto num :nums){
            mp[num]++;
        }

        //Populate the buckets according to their frequency
        for(auto& itr:mp){
            frequencyBucket[itr.second].push_back(itr.first);
        }
        vector<int>result;
        //Traverse in reverse and collect K elements from the inner arrays
        for(int i=frequencyBucket.size()-1;i>=0;i--){ // Changed i>0 to i>=0 to include i=0
            for(int itr:frequencyBucket[i]){
                result.push_back(itr);
                if(result.size()==k){
                    return result;
                }
            }
        }
        return result; 
    }
};