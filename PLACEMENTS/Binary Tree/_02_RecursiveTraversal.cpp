#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


/*          PRE ORDER  TRAVERSAL        */


void get_pre(Node* root, vector<int>&ans)
    {
        if (root==NULL) return;

        ans.push_back(root->data);
        get_pre(root->left,ans);
        get_pre(root->right,ans);
    }
vector<int> preorderTraversal(Node* root) {
        
        vector<int>ans;
        
        get_pre(root,ans);
        
        
        return ans;
        
    }


/*          IN ORDER TRVERSAL            */
void get_in(Node* root, vector<int>&ans)
    {
        if (root==NULL) return;

        
        get_in(root->left,ans);
        ans.push_back(root->data);
        get_in(root->right,ans);
    }
    vector<int> inorderTraversal(Node* root) {
        vector<int>ans;
        
        get_in(root,ans);
        
        
        return ans;
        
    }

    /*          POST ORDER TRAVERSAL          */
    void get_post(Node* root, vector<int>& ans) {
        if (root == NULL)
            return;

        get_post(root->left, ans);
        get_post(root->right, ans);
        ans.push_back(root->data);
    }
    vector<int> postorderTraversal(Node* root) {
        vector<int> ans;

        get_post(root, ans);

        return ans;
    }


int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int>Pretree=preorderTraversal(root);

    for(auto i: Pretree)
    {
        cout<<i <<" ";
    }

    cout<<endl;

    vector<int>Intree=inorderTraversal(root);

    for(auto i:Intree)
    {
        cout<<i <<" ";
    }

    cout<<endl;

    vector<int>Posttree=postorderTraversal(root);

    for(auto i:Posttree)
    {
        cout<<i <<" ";
    }

}
