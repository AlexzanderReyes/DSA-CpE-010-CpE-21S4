#include <iostream>
#include <vector>
using namespace std;

// Define the structure of a tree node
struct TreeNode {
    char data;
    vector<TreeNode*> children;

    TreeNode(char value) : data(value) {}
};

// Add child to a parent node
void addChild(TreeNode* parent, TreeNode* child) {
    parent->children.push_back(child);
}

// Pre-order traversal search
void findPreOrder(TreeNode* root, char key, bool &found) {
    if (!root || found) return;

    if (root->data == key) {
        cout << "{" << key << "} was found." << endl;
        found = true;
        return;
    }
    for (TreeNode* child : root->children) {
        findPreOrder(child, key, found);
    }
}

// Post-order traversal search
void findPostOrder(TreeNode* root, char key, bool &found) {
    if (!root || found) return;

    for (TreeNode* child : root->children) {
        findPostOrder(child, key, found);
    }
    if (root->data == key) {
        cout << "{" << key << "} was found." << endl;
        found = true;
    }
}

// In-order traversal search (assuming binary structure where in-order makes sense)
void findInOrder(TreeNode* root, char key, bool &found) {
    if (!root || found || root->children.size() == 0) return;

    if (root->children.size() > 0) findInOrder(root->children[0], key, found);
    if (root->data == key) {
        cout << "{" << key << "} was found." << endl;
        found = true;
        return;
    }
    if (root->children.size() > 1) findInOrder(root->children[1], key, found);
}

// findData function that chooses the traversal method based on CHOICE
void findData(TreeNode* root, const string &choice, char key) {
    bool found = false;
    if (choice == "pre") {
        findPreOrder(root, key, found);
    } else if (choice == "post") {
        findPostOrder(root, key, found);
    } else if (choice == "in") {
        findInOrder(root, key, found);
    }
    if (!found) {
        cout << key << " was not found." << endl;
    }
}

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

    // Build the tree structure
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

    // Find and display results
    cout << "Finding 'H' using pre-order:" << endl;
    findData(A, "pre", 'H');

    cout << "Finding 'M' using post-order:" << endl;
    findData(A, "post", 'M');

    cout << "Finding 'A' using in-order (assuming binary structure):" << endl;
    findData(A, "in", 'A');

    // Clean up memory
    delete A; delete B; delete C; delete D; delete E; delete F; delete G;
    delete H; delete I; delete J; delete K; delete L; delete M; delete N;
    delete P; delete Q;

    return 0;
}
