#include <iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;

    Node(int val) {
        key = val;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, int val) {
        if (node == nullptr)
            return new Node(val);

        if (val < node->key)
            node->left = insert(node->left, val);
        else if (val > node->key)
            node->right = insert(node->right, val);

        return node;
    }

    void inorder(Node* node) {
        if (node == nullptr)
            return;
        inorder(node->left);
        cout << node->key << " ";
        inorder(node->right);
    }

    void preorder(Node* node) {
        if (node == nullptr)
            return;
        cout << node->key << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node* node) {
        if (node == nullptr)
            return;
        postorder(node->left);
        postorder(node->right);
        cout << node->key << " ";
    }

public:
    BST() {
        root = nullptr;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    void displayInorder() {
        inorder(root);
    }

    void displayPreorder() {
        preorder(root);
    }

    void displayPostorder() {
        postorder(root);
    }
};

int main() {
    BST btObj;
    btObj.insert(10);
   btObj.insert(20);
    btObj.insert(30);
   

    cout << "Inorder: ";
    btObj.displayInorder();
    cout << "\n==============================\n";

    cout << "Preorder: ";
    btObj.displayPreorder();
    cout << "\n==============================\n";

    cout << "Postorder: ";
    btObj.displayPostorder();
    cout << "\n";

    return 0;
}
