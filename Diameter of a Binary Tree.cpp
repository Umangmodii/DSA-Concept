#include <iostream>

using namespace std;

// Create a Node Structure

struct Node
{
    int data;
    Node *left;
    Node *right;

    // Create a Constructor

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution
{
    // Recursive Functions Call
    int height(Node *root)
    {
        // Base Case
        if (root == NULL)
        {
            return 0;
        }

        int left = height(root->left);
        int right = height(root->right);

        int ans = max(left, right) + 1;
    }

    int diameter(Node *root)
    {
        // Return the Height of the tree plus the Diameter of its Left Subtree plus the Diam

        // Base Case
        if (root == NULL)
        {
            return 0;
        }

        int o1 = height(root->left);
        int o2 = height(root->right);
        int o3 = height(root->left) + height(root->right) + 1;

        int ans = max(o1, max(o2, o3));
    }
};

// Recursive Functions Call
int main()
{
    int height(Node * root);

    int diameter(Node * root);

    return 0;
}