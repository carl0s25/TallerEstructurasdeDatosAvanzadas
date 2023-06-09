#include <queue>

class CBTInserter {
private:
    TreeNode* root;
    std::queue<TreeNode*> treeQueue;

public:
    CBTInserter(TreeNode* root) {
        this->root = root;
        std::queue<TreeNode*> tempQueue;
        tempQueue.push(root);
        while (!tempQueue.empty()) {
            TreeNode* node = tempQueue.front();
            tempQueue.pop();

            treeQueue.push(node);

            if (node->left)
                tempQueue.push(node->left);
            if (node->right)
                tempQueue.push(node->right);

            if (node->left && node->right)
                treeQueue.pop();
        }
    }
    int insert(int val) {
        TreeNode* newNode = new TreeNode(val);
        TreeNode* parent = treeQueue.front();

        if (!parent->left)
            parent->left = newNode;
        else {
            parent->right = newNode;
            treeQueue.pop();
        }
        treeQueue.push(newNode);
        return parent->val;
    }
    TreeNode* get_root() {
        return root;
    }
};
