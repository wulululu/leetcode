class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k,j=0;
        int s = nums.size();
        for(int i=0;i<s;i++){
            if(j==0) k=nums[i];
            if(k==nums[i]) j++;
            else j--;
        }
        return k;
    }
};