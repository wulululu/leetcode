class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),inserter(v,v.end()));
        return v;
    }
};