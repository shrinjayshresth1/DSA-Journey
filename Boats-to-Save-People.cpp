class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left=0;
        int right=people.size()-1;
        int count=0;
        sort(people.begin(),people.end());

        while(left<=right){
            if(people[right]==limit){
                count+=1;
                right--;
            }
            else if(people[left]+people[right]<=limit){
                count+=1;
                left++;
                right--;
            }

            else{
                count+=1;
                right--;
            }
          

        }
        return count;
    }
};