class Solution {
public:
    string customSortString(string order, string s) 
    {
     unordered_map<char,int> mp;
     unordered_map<char,int> mp1;
     for(auto x:order)
     {
        mp[x]++;
     }
     for(auto a:s)
     {
        mp1[a]++;
     }
     string str;
     for(auto a:order)
     {
        for(auto i=0;i<mp1[a];i++)
        {
        str=str+a;
        }
        mp1[a]=0;
     }
     for(auto x:mp1)
     {
     if(mp1[x.first]!=0)
     {
     for(auto i=0;i<mp1[x.first];i++)
     {
         str=str+x.first;
     }  
     }
     }
     return str;
    }
};
