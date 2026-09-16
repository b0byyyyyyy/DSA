class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n =s.length();
        int m = p.length();

        if(m>n){
           return{};

        }
     vector<int> freq(26,0);
     vector<int> window(26,0);   

     for(int i=0; i<m; i++){
        freq[p[i]-'a']++;
        window[s[i]-'a']++;
     }

     vector<int> ans;
     if(freq == window)
     ans.push_back(0);

     for(int i=m; i<n; i++){
        window[s[i-m]-'a']--;
        window[s[i]-'a']++;

        if(freq == window)
        ans.push_back(i-m+1);
     }
     return ans;
    }
};