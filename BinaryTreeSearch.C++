#include <iostream>

using namespace std;

struct Folder
{
    string name; 
    Folder *left, *right; 
};

Folder* createFolder(string name) 
{
    Folder* newFolder = new Folder; 
    newFolder->name = name; 
    newFolder->left = NULL; 
    newFolder->right = NULL; 
    return newFolder;
}

void preorder(Folder* root)
{
    if (root == NULL)
        return;

    cout << root->name << " ";
    preorder(root->left);
    preorder(root->right);
}

void searchFolder(Folder* root, string key)
{
    if (root == NULL)
        return;

    if (root->name == key)
    {
        cout << "Folder found!";
    }
    else
    {
        searchFolder(root->left, key);
        searchFolder(root->right, key);
    }
}

int main()
{
    Folder* root = createFolder("Main");

    root->left = createFolder("Documents");
    root->right = createFolder("Pictures");

    root->left->left = createFolder("Assignments");
    root->left->right = createFolder("Notes");

    cout << "Folder Structure: ";
    preorder(root);

    cout << "\n\nSearching for Notes: ";
    searchFolder(root, "Notes");

    return 0;
}
