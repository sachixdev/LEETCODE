class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int val : nums){
            st.insert(val);
        }
        int k = st.size();
        int j = 0;
        for(int val : st){
            nums[j++] = val;
        }
        return k;
    }
};