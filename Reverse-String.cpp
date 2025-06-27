class Solution {
public:
        void reverseString(vector<char>& s) {
        int i=0;
        while(i<ceil(s.size()/2)){
            swap(s[s.size()-i-1],s[i]);
            i++;
        }
    }
};