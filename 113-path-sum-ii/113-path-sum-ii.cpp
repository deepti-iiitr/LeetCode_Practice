class Solution {
public:
    vector<vector<int>> paths;
    void findPaths(TreeNode* node, int target, int curr, vector<int> &path) {
        if (node == NULL)
            return;
        curr += node->val;
        path.push_back(node->val);
        if (curr == target && node->left == node->right)
            paths.push_back(path);
        findPaths(node->left, target, curr, path);
        findPaths(node->right, target, curr, path);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        findPaths(root, targetSum, 0, path);
        return paths;
    }
};