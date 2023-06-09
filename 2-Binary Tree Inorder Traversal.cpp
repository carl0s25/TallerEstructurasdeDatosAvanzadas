#include <vector>
#include <stack>
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> nodeStack;
        TreeNode* current = root;
        
        while (current != nullptr || !nodeStack.empty()) {
            while (current != nullptr) {
                nodeStack.push(current);
                current = current->left;
            }   
            current = nodeStack.top();
            nodeStack.pop();
            result.push_back(current->val);    
            current = current->right;
        }
        return result;
    }
};
