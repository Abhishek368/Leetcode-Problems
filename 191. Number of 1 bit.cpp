//time: O(log n)

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n){
            
            //slower than what is implemented
            // if(n & 1) count++;
            // n = n>>1;
            
            count ++;
            n = n&(n-1);
        }
        return count;
    }
};
