// Binary Tree Using CPP/DSA

#include <iostream>
#include <queue>

using namespace std;

// Create a new class
class Node
{
public:
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

// Create a new Build Trees Function

Node *buildTree(Node *root)
{
    int data;
    cout << "Enter the Data ELement : " << endl;
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left : " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right : " << data << endl;
    root->right = buildTree(root->right);
}

// Tree Level Traversal Functions
void printLevelOrder(Node *root)
{
    // Queue Used in Tree Traversal

    queue<Node *> q;

    // Push in Root Elements
    q.push(root);

    // When q is not equal to empty+

    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (root == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
            

            else
            {
                if (root->left)
                {
                    // When User Enter the Left Side Elements
                    q.push(temp->left);
                }

                if (root->right)
                {
                    // When User Enter the Right side Elements
                    q.push(temp->right);
                }
            }
        }
    }
}

// Preorder in Binary Trees Using Recursion

void preorder(Node *root)
{
    // base Case
    if (root == NULL)
    {
        return;
    }

    else
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Inorder in Binary Trees Using Recursion

void inorder(Node *root)
{
    // base Case
    if (root == NULL)
    {
        return;
    }

    else
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Inorder in Binary Trees Using Recursion

void postorder(Node *root)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }

    else
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main()

{
    /*  Creating the binary tree is done in following way. */

    Node *root = NULL;

    // Create a trees
    root = buildTree(root);

    // When Enter the Values of User
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // Printing level order traversal of binary tree
    printLevelOrder(root);

    cout << "\n";

    // Preorder Traversal using Iterative method
    cout << "Preorder Traversal is : ";
    preorder(root);

    cout << "\n";

    // Inorder Traversal using Iterative method
    cout << "Inorder Traversal is : ";
    inorder(root);

    cout << "\n";

    // Inorder Traversal using Iterative method
    cout << "Postorder Traversal is : ";
    postorder(root);

    cout << "\n";

    return 0;
}