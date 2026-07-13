#include<iostream>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int main(){
    TreeNode* root = new TreeNode(1);
    root->left->val=2;
    root->right->val=3;
    

    return 0;
}