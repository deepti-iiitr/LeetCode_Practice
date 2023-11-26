/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void buildGraph(TreeNode* root,unordered_map<int,vector<int>>& graph){
        
        if(root->left!=NULL){
            graph[root->val].push_back(root->left->val);
            graph[root->left->val].push_back(root->val);
            buildGraph(root->left,graph);
        }
        if(root->right!=NULL){            
            graph[root->val].push_back(root->right->val);
            graph[root->right->val].push_back(root->val);
            buildGraph(root->right,graph);            
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
      
        if(k==0)
            return {target->val};
        unordered_map<int,vector<int>> graph;
        unordered_map<int,bool> visited;
        vector<int> res;
        queue<int>q;
        int ans = 0;
        buildGraph(root,graph);
        
        q.push(target->val);
        
        while(!q.empty()){
            int sz = q.size();
            
            for(int i=0;i<sz;i++){
                int curr = q.front();
                q.pop();
                visited[curr]=true;
                
                for(int x: graph[curr]){
                    if(!visited[x])
                        q.push(x);
                }
            }
            ans++;
            if( ans == k){
                while(!q.empty()){
                    res.push_back(q.front());
                    q.pop();
                }
                break;
            }
        }
        return res;
        
    }
};