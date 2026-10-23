class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;
        for(int i = 0; i<n ; i++){
            if(cnt1 == 0 && el2 != nums[i]){
                cnt1 = 1;
                el1 = nums[i];
            }else if (cnt2 == 0 && el1 != nums[i]) {
                cnt2 = 1;
                // Initialize el2 as nums[i]
                el2 = nums[i]; 
            } 
            else if (nums[i] == el1) {
                // Increment count for el1
                cnt1++;
            } 
            else if (nums[i] == el2) {
                // Increment count for el2
                cnt2++; 
            } 
            else {
                // Decrement count for el1
                cnt1--; 
                 // Decrement count for el2
                cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0; 
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == el1) {
                cnt1++; 
            }
            if (nums[i] == el2) {
                cnt2++;
            }
        }
        int mini = n / 3 + 1;
        vector<int> result; 
        if (cnt1 >= mini) {
            result.push_back(el1);
        }
        if (cnt2 >= mini && el1 != el2) {
            result.push_back(el2); 
        }
        return result;    
    }
};