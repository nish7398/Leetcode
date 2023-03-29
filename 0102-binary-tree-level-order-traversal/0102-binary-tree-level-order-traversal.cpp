class Solution {
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> add;
        if(!root)
            return ans;
        
        queue<TreeNode*> mq;
        mq.push(root);

        while(mq.size() > 0){
            int count = mq.size();
            for(int i = 0; i < count; i++){
                root = mq.front();
                mq.pop();
                add.push_back(root->val);

                if(root->left != NULL)
                    mq.push(root->left);

                if(root->right != NULL)
                    mq.push(root->right);
                }
                ans.push_back(add);
                add.clear();
            }
    
        return ans;
    }
};