class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        const int n=intervals.size();
        vector<pair<int, int>> P;
        for(auto& I: intervals){
            int x=I[0], y=I[1]+1;
            P.emplace_back(x, 1);
            P.emplace_back(y, -1);
        }
        sort(P.begin(), P.end());
        int cnt=0, x=0;
        for( auto& [_, f]: P){
            x+=f;
            cnt=max(cnt, x);
        }
        
        return cnt;    
    }
};



auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
