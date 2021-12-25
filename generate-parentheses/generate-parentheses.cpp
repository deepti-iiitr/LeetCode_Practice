class Solution {
public:
   vector<string> result;

void helper(string str, int left, int right){
    if(left == 0 && right == 0)  result.push_back(str);
    if(left!=0)                  helper(str+'(', left-1, right);
    if( right > left) helper(str+')', left, right-1);
}    

vector<string> generateParenthesis(int n) {
    helper("",n,n);
    return result;
}
};