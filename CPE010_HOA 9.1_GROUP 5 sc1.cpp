#include <iostream>
#include <vector>
using namespace std;

// Define the structure of a tree node
struct TreeNode {
    char data;
    vector<TreeNode*> children; // A node can have multiple children

    // Constructor to initialize the node
    TreeNode(char value) : data(value) {}
};

// Function to add a child to a given node
void addChild(TreeNode* parent, TreeNode* child) {
    parent->children.push_back(child);
}

// Function to print the tree in a simple manner
void printTree(TreeNode* root, int level = 0) {
    if (root == nullptr) return;

    // Indentation for each level
    for (int i = 0; i < level; ++i) cout << "  ";
    cout << root->data << endl;

    // Print each child of the node
    for (TreeNode* child : root->children) {
        printTree(child, level + 1);
    }
}

int main() {
    // Create nodes based on the tree structure
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

    // Build the tree by adding children to each node
    addChild(A, B);
    addChild(A, C);
    addChild(A, D);
    addChild(A, E);
    addChild(A, F);
    addChild(A, G);

    addChild(D, H);
    addChild(E, I);
    addChild(E, J);

    addChild(F, K);
    addChild(F, L);
    addChild(F, M);

    addChild(G, N);

    addChild(J, P);
    addChild(J, Q);

    // Print the tree structure
    printTree(A);

    // Free allocated memory (to avoid memory leaks)
    delete A; delete B; delete C; delete D; delete E; delete F; delete G;
    delete H; delete I; delete J; delete K; delete L; delete M; delete N;
    delete P; delete Q;

    return 0;
}

