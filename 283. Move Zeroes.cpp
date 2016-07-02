class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>::iterator it;
        int cnt=0;
        for(it=nums.begin();it!=nums.end();){
            if(*it == 0){
                it = nums.erase(it);
                cnt++;
            }
            else it++;
        }
        while(cnt--) nums.push_back(0);
    }
};
