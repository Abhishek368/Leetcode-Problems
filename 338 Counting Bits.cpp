//Given an integer num, return an array of the number of 1's in the binary representation of every number in the range [0, num].

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans;
        for(int i=0;i<=num;i++){
            int count = 0;
            int n=i;
            while(n){
                count++;
                n = n&(n-1);
            }
            ans.push_back(count);
            
        }
        return ans;
    }
};
