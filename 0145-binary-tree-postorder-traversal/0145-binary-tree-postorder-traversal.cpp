/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void postOrderTraversal(TreeNode* root, vector<int>& postorder){
    // base case
    if(root == NULL){
        return ;
    }
    postOrderTraversal(root->left, postorder);
    postOrderTraversal(root->right, postorder);
    postorder.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder ;
        postOrderTraversal(root, postorder);
        return postorder;
    }
};