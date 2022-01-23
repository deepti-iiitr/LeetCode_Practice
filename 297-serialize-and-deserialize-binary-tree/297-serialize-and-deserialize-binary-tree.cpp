class Codec {
public:
    
    void buildString(TreeNode* root, string &res)
    {
        if(root == NULL)
        {   res += "null,";
            return;
        }
        
        res += to_string(root->val) + ",";
        buildString(root->left, res);
        buildString(root->right, res);
    }
    
    string serialize(TreeNode* root) 
    { 
        string res = "";
        buildString(root, res);
        return res;
    }
    
    TreeNode* buildTree(queue<string> &q) 
    {
        string s = q.front();
        q.pop();
        
        if(s == "null")
            return NULL;
        
        TreeNode* root = new TreeNode(stoi(s));
        root->left = buildTree(q);
        root->right = buildTree(q);
        return root;
    }
    
    TreeNode* deserialize(string data) 
    {
        string s = "";
        queue <string> q;
        
        for(char c: data) 
        {
            if(c == ',') 
            {
                q.push(s);
                s = "";
            }
            else
                s += c;
        }
        
        return buildTree(q);
    }
};
