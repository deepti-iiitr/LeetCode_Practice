/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        
    int max_depth = 0, breadth;
    queue<Node *> q;

    if (root) q.push(root);
    while (!q.empty()) {
      breadth = q.size(), max_depth++;
      for (int i = 0; i < breadth; i++) {
        root = q.front(), q.pop();
        for (auto child : root->children) q.push(child);
      }
    }
    return max_depth;
  
    }
};