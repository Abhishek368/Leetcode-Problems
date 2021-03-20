//Given the array arr of positive integers and the array queries where queries[i] = [Li, Ri], 
//for each query i compute the XOR of elements from Li to Ri (that is, arr[Li] xor arr[Li+1] xor ... xor arr[Ri] ).
//Return an array containing the result for the given queries.


class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> ans;
        vector<int> prefix(n);
        prefix[0] = arr[0];
        for(int i=1;i<arr.size();i++){
            prefix[i] = prefix[i-1] ^ arr[i];
        }
        for(int i = 0;i<queries.size();i++){
            int start = queries[i][0],end = queries[i][1];
            if(start == 0) ans.push_back(prefix[end]);
            else{
                ans.push_back(prefix[end] ^ prefix[start-1]);
            }
        }
        return ans;
        
    }
};
