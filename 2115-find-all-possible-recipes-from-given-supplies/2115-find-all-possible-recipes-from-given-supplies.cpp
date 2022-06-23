class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string, bool> mp;
        
        for(string str : supplies) {
            mp[str] = true;
        }
        unordered_set<string> st;
        
        int n = recipes.size();
        
        for(int x = 0; x < n; x++) {
            
            bool change = false;
            
            for(int i = 0; i < n; i++) {
                if(mp[recipes[i]])
                    continue;
                bool flag = true;
                for(string ing : ingredients[i]) {
                    if(!mp[ing]) {
                        flag = false;
                        break;
                    }
                }

                if(flag) {
                    change = true;
                    mp[recipes[i]] = true; 
                    st.insert(recipes[i]);
                }
            }
            
            if(!change)
                break;
        }
        
        vector<string> ans(st.begin(), st.end());
        
        return ans;
    }
};