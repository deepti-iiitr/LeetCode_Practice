class Solution {
public:
    int longestBeautifulSubstring(string word) {
         if(word.size()<5){
            return 0;
        }
        int i=0;
        int j=1;
        unordered_map<char,int>m;
        int mx=0;
        m[word[0]]++;
        while(j<word.size()){
            m[word[j]]++;
            if(word[j-1]>word[j]){
                while(i<word.size()&&i!=j){
                 m[word[i]]--;
                if(m[word[i]]==0){
                    m.erase(word[i]);
                }
                  i++; 
                }
            }   
            if(m.size()==5){
                mx=max(j-i+1,mx);
                
            }
         j++;
        }
        return mx;
    }
};