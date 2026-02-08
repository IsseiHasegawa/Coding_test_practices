#include <vector>

using namespace std;


//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    int pre = 0, in = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return built(preorder, inorder, INT_MAX);
    }

    TreeNode* built(vector<int>& preorder, vector<int>& inorder, int stop){
        if (pre >= preorder.size()) return nullptr;
        if (inorder[in] == stop){
            in++;
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[pre++]);
        root->left = built(preorder, inorder, root->val);
        root->right = built(preorder, inorder, stop);

        return root;
    }
};