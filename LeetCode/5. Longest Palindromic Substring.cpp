class Solution {
    private: 
        bool solve(vector<vector<bool>> &dp, int i, int j, string &s){
            if(i == j){
                return dp[i][j] = true;
            }
            if(j-i == 1){
               if(s[i] == s[j]){
                    return dp[i][j] = true;
               }                                                                                 
…                        if(j-i+1 > maxlen){
                            startIndex = i;
                            maxlen = j-i+1;
                        }
                    }
                }
            }
            return s.substr(startIndex, maxlen);
        }
};
