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
    vector<int> largestValues(TreeNode* root) {
        vector<vector<int>> levelOrder;
        if(root == NULL){
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            // A
            vector<int>output;
            int levelLen=q.size();
            for(int i=0; i<levelLen; i++){
                TreeNode* front=q.front();
                q.pop();
                output.push_back(front->val);

                 // C
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            levelOrder.push_back(output);
               
        }

        vector<int> res;
        for(int i=0; i<levelOrder.size(); i++){
            int max = *max_element(levelOrder[i].begin(), levelOrder[i].end());
            res.push_back(max);
        }
       
        return res;
    }
};