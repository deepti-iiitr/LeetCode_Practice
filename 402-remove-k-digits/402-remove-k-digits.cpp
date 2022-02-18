class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
	for(int i=0; i<num.size(); i++){
		if(st.empty()){
			st.push(num[i]);
		}
		else{
			while(!st.empty() && st.top() > num[i] && k>0){
				st.pop();
				k--;
			}
			st.push(num[i]);
		}
	}

	while(k!=0){
		st.pop();
		k--;
	}
	
	string ans;
	while(!st.empty()){
		ans += st.top();
		st.pop();
	}
	reverse(ans.begin(), ans.end());

	while(ans.length() > 0 && ans[0] == '0'){
		ans.erase(0, 1);
	}
	return ans.empty()  ? "0" : ans;
}
    
};