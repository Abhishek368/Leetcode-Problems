//Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n =nums.size();
        vector<int> bits(32,0);
        int ans= 0;
        for(int ele : nums){
            for(int i=0;i<32;i++){
                if(ele & (1<<i)) bits[i]++;
            }
        }
        
        for(int i=0;i<32;i++){
            if(bits[i]%3 == 1) ans += (1<<i); 
        }
        return ans;
    }
};
