class Solution {
public:
      unordered_set<string>st;
      int t[301];
      bool solve(int idx,string s,int n)
      {
        if(idx==n)
        {
        return true;
        }
        if(t[idx]!=-1)
        return t[idx];
        
        for(int l=1;l<=n-idx;l++)
        {
            string temp=s.substr(idx,l);
            if(st.find(temp)!=st.end() && solve(idx+l,s,n))
            {
                return t[idx]=true;
            }
        }
        return t[idx]=false;

      }
    bool wordBreak(string s, vector<string>& wordDict) {//vector take o(n) to check word present or not 
    //so am declate unorered set take o(1)
    for(string &word: wordDict)
    {
        st.insert(word);
    }
    memset(t, -1, sizeof(t));
    int n=s.size();
    
   return solve(0,s,n);

        
    }
};