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
void traversal(Node* root, vector<int> &postorder){
    //
    if(root == NULL){
        return ;
    }
    // traversal(root_children, postorder);
    // postorder.push_back(root->val);

        for(Node*& x : root->children) {
            traversal(x, postorder);
        }
        
        postorder.push_back(root->val);
}
    vector<int> postorder(Node* root) {
        vector<int> ans;
        traversal(root, ans);
        return ans;
    }
};