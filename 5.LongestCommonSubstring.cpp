//noobcoding eg1

class Solution {
public:
    
    string longestPalindrome(string s) {
        int n = s.size(),maxlen = 1;
        vector<vector<int>> dp(n,vector<int>(n,0));
        string best_str =s.substr(0,1);
        for(int i=0;i<n;i++){
            dp[i][i] = 1;
        }
        for(int i=0;i<n-1;i++){
            if(s[i] == s[i+1]){
                dp[i][i+1] = 1;
                best_str = s.substr(i,2);
                maxlen = 2;
            }
            else dp[i][i+1] = 0;
        }
   
                
        for(int k=3;k<=n;++k){
            for(int i=0;i<n-k+1;i++){
                int j = i+k-1;
                if(dp[i+1][j-1] && s[i] == s[j]){dp[i][j] = 1;
                
                  if(k>maxlen){
                        maxlen = k;
                        best_str = s.substr(i,k);
                    }
                }                                 
            }
        }
        
     // for(int i=0;i<n;i++){
        //     for(int j =0 ;j<n;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return best_str; 
    }
};
