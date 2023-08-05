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
 map<int,vector<TreeNode*>> mp;
class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if(n==0)
            return {};
     return cal(1,n);   
    }
    vector<TreeNode*> cal(int start,int end)
    {
        if(!mp[start*10+end].empty())
            return mp[start*10+end];
        if(start>end)
            return {NULL};
                      vector<TreeNode*> v;
        for(int i=start;i<=end;i++)
        {
            vector<TreeNode*> left=cal(start,i-1);
            vector<TreeNode*> right=cal(i+1,end);
            for(TreeNode * l:left)
            {
                for(TreeNode *r:right)
                {
                    TreeNode *current=new TreeNode(i);
                    current->left=l;
                    current->right=r;
                    v.push_back(current);
                }
            }
        }mp[start*10+end]=v;
        return v;
    }
};
