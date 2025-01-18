class Solution {
public:
   bool static comp(const pair<char,int>&a,const pair<char,int>&b){
      if(a.second==b.second)
            return a.first<b.first;
        return a.second>b.second;
    }
    string frequencySort(string s) {
         unordered_map<char,int>mp;
        string str="";
        vector<pair<char,int>>v;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(auto& it:mp)
        {
            v.push_back(make_pair(it.first,it.second));
        }
        sort(v.begin(),v.end(),comp);
        for(auto it:v)
        {
            while(it.second--)
            {
                str+=it.first;
            }
        }
        return str;
    }
};