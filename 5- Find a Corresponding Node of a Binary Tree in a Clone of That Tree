#include <stack>

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        stack<TreeNode*> stackOriginal;
        stack<TreeNode*> stackCloned;
        
        stackOriginal.push(original);
        stackCloned.push(cloned);
        
        while (!stackOriginal.empty()) {
            TreeNode* nodeOriginal = stackOriginal.top();
            TreeNode* nodeCloned = stackCloned.top();
            
            stackOriginal.pop();
            stackCloned.pop();
            
            if (nodeOriginal == target) {
                return nodeCloned;
            }
            
            if (nodeOriginal->right) {
                stackOriginal.push(nodeOriginal->right);
                stackCloned.push(nodeCloned->right);
            }
            
            if (nodeOriginal->left) {
                stackOriginal.push(nodeOriginal->left);
                stackCloned.push(nodeCloned->left);
            }
        }
        
        return nullptr;
    }
};
