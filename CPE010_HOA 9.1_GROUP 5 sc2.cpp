#include <iostream>
#include <vector>
using namespace std;

// TreeNode definition
struct TreeNode {
    char data;
    vector<TreeNode*> children;
    TreeNode(char value) : data(value) {}
};

// Function to add a child to a node
void addChild(TreeNode* parent, TreeNode* child) {
    parent->children.push_back(child);
}

// Pre-order traversal
void preOrder(TreeNode* node) {
    if (node == nullptr) return;
    cout << node->data << " ";
    for (TreeNode* child : node->children) {
        preOrder(child);
    }
}

// Post-order traversal
void postOrder(TreeNode* node) {
    if (node == nullptr) return;
    for (TreeNode* child : node->children) {
        postOrder(child);
    }
    cout << node->data << " ";
}

// In-order traversal (not typical for general trees, but included for completion)
void inOrder(TreeNode* node) {
    if (node == nullptr) return;
    if (!node->children.empty()) inOrder(node->children[0]); // First child
    cout << node->data << " ";
    for (size_t i = 1; i < node->children.size(); i++) {
        inOrder(node->children[i]);
    }
}

// Main function to set up the tree and perform traversals
int main() {
    // Create the tree structure
    TreeNode* A = new TreeNode('A');
    TreeNode* B = new TreeNode('B');
    TreeNode* C = new TreeNode('C');
    TreeNode* D = new TreeNode('D');
    TreeNode* E = new TreeNode('E');
    TreeNode* F = new TreeNode('F');
    TreeNode* G = new TreeNode('G');
    TreeNode* H = new TreeNode('H');
    TreeNode* I = new TreeNode('I');
    TreeNode* J = new TreeNode('J');
    TreeNode* K = new TreeNode('K');
    TreeNode* L = new TreeNode('L');
    TreeNode* M = new TreeNode('M');
    TreeNode* N = new TreeNode('N');
    TreeNode* P = new TreeNode('P');
    TreeNode* Q = new TreeNode('Q');

    addChild(A, B); addChild(A, C); addChild(A, D); addChild(A, E); addChild(A, F); addChild(A, G);
    addChild(D, H);
    addChild(E, I); addChild(E, J);
    addChild(F, K); addChild(F, L); addChild(F, M);
    addChild(G, N);
    addChild(J, P); addChild(J, Q);

    // Perform and display traversals
    cout << "Pre-order: ";
    preOrder(A);
    cout << "\nPost-order: ";
    postOrder(A);
    cout << "\nIn-order: ";
    inOrder(A);

    return 0;
}

