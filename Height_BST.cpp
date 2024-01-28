// Height find in Binary Trees

#include <iostream>

using namespace std;

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
public:
    int height(Node *node)
    {
        // Base Case

        if (node == NULL)
        {
            return 0;
        }

        int left = height(node->left);
        int right = height(node->right);

        int ans = max(left, right) + 1;

        return ans;
    }
};

int main()
{
    int height(Node);

    return 0;
}