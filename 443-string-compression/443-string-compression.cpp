class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>res;
        //sort(chars.begin(), chars.end());
        int i=0;
        if(chars.size()<=1)
            return chars.size();
        while(i<chars.size() ){
            int count=1;
            char t=chars[i];
            if(i<chars.size()-1){
                int j=i+1;
            while(j<chars.size()){
                if( chars[j]==chars[i] )
                {
                    count++;
                   j++;
                }
                else
                    break;
            }
            if(count>1)
            {
                res.push_back(chars[i]);
                string temp=to_string(count);
                for(int w=0;w<temp.size();w++)
                    res.push_back(temp[w]);
            }
            else
                res.push_back(chars[i]); 
            i=j;
            }
            else
            {
                res.push_back(chars[chars.size()-1]);
                break;
            }
        }
        chars=res;
        for(int m=0;m<res.size();m++){
            cout<<res[m];
        }
        return res.size();
    }
};