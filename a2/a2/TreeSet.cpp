//
//  TreeSet.cpp
//  a2
//
//  Created by Cornelius Smith on 2019-02-05.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//
#include "TreeSet.h"
#include <iostream>
#include <math.h>
using namespace std;

//creates class TreeNode
class TreeNode
{
friend class TreeSet;
public:
    TreeNode();
    TreeNode(const string& s);
    ~TreeNode();
    TreeNode * insert(TreeNode * node, const string& data);
    TreeNode * remove_node(TreeNode * node, const string& data);
    bool contains_value(TreeNode * node, const string& data);
    void inorder(TreeNode* node);
    int getCount(TreeNode * node);
    void treeToArray(TreeNode* node, string values[], int& index);
    string data;
    //
   // TreeNode * root;
    TreeNode * left;
    TreeNode * right;
};

//Constructor for TreeNode
TreeNode::TreeNode()
{
    data = "";
    left = NULL;
    right = NULL;
}

//Copy Constuctor for TreeNode
TreeNode::TreeNode(const string& s)
{
    data = s;
    left = NULL;
    right = NULL;
}

//Destructor for TreeNode
TreeNode::~TreeNode()
{
    data = "";
    left = NULL;
    right = NULL;
    delete left;
    delete right;
}

//Inserts new node to TreeNode
TreeNode * insert(TreeNode * node, const string& data)
{
    if (node == NULL)
    {
        return node = new TreeNode(data); //creates new node if none exists
    }
        if (data < node->data)
        {
            node->left = insert(node->left, data);
        }
        else
        {
            node->right =insert(node->right, data);
        }
    return node;
}

//removes node for TreeNode
TreeNode * remove_node(TreeNode * node, const string& data)
{
    if (node == NULL)
    {
        return node;
    }
    else if (data < node->data)
    {
        node->left = remove_node(node->left, data);
    }
    else if (data > node->data)
    {
       node->right = remove_node(node->left, data);
    }
    else
    {
        //Handles the case where there is only one child
        if(node->right == NULL)
        {
            TreeNode* temp = node->left;
            delete node;
            return temp;
        }
        else if(node->left == NULL)
        {
            TreeNode* temp = node->right;
            delete(node);
            return temp;
        }
        //Handles the case where there are two children noded
        else
        {
            TreeNode* parent = node->right;
            TreeNode *succ = node->right;
            while (succ->left != NULL)
            {
                parent = succ;
                succ = succ->left;
            }
            parent->left = succ->right;
            // Copy Successor Data to node
            node->data = succ->data;
            // Delete Successor and return node
            delete succ;
            return node;
        }
    }
    return node;
}

//provides inorder traversal for a bst  not really used by TreeSet but its for test purposes
void inorder(TreeNode* node)
{
    if (node != NULL)
    {
        inorder(node->left);
        std::cout << node->data << "\n";
        inorder(node->right);
    }
    //std::cout << "k";
}

//checks to see if a value already exists in a TreeNode
bool contains_value(TreeNode * node, const string& data)
{
    if (node == NULL)
    {
        return false;
    }
    else if (data == node->data)
    {
        return true;
    }
    else if (node->data > data)
    {
        return contains_value(node->left, data);
    }
    else //(root.Value < value)
    {
        return  contains_value(node->right, data);
    }
    return false;
}

//gets the current number of nodes in a TreeNode
int getCount(TreeNode * node)
{
    static int total = 0;
    if (node != NULL)
    {
        getCount(node->left);
        total++;
        getCount(node->right);
    }
    return total;
}

//takes the TreeNode and converts it to an array. I couldnt actually return the array,
//so for the time being it just adds it to an array that can't be accessed outside of the
//function.
void treeToArray(TreeNode* node, string values[], int& index)
{
    if(node == NULL)
    {
        return;
    }
    if(node->left != NULL)
    {
        treeToArray(node->left, values, index);
    }
    values[index] = node->data;
    std::cout <<"array:{"<< values[index] << "}\n";
    index++;
    if(node->right != NULL)
    {
        treeToArray(node->right, values, index);
    }
    
}

//Constructor for TreeSet
TreeSet::TreeSet()
{
    root = NULL;
    set_size = 0;
}

//Copy Constructor for TreeSet
//It couldnt be
TreeSet::TreeSet(string sa[], int sa_size)
{
    for(int i = 0; i < sa_size; i++)
    {
        set_[i] = sa[i];
    }
    set_size = sa_size;
}

//Adds value to set
bool TreeSet::add(const string &s)
{
    if(contains(s))
    {
        std::cerr << "Set already contains: " << s << "\n";
        return false;
    }
    root = insert(root, s);
    //size++;
    return true;
}

//checks to see if the string is already in the set
bool TreeSet::contains(const string &s)
{
    return contains_value(root, s);
    
}

//converts the set to an Array.
int TreeSet::toArray(string sa[])
{
    treeToArray(root, sa, set_size);
    return 0;
}

//returns the size of the current set(root only not including the original set size)
int TreeSet::size()
{
    return getCount(root);
    
}

//Deletes the current set
void TreeSet::clear()
{
    root = NULL;
    int x = size();
    x = x + set_size;
    for(int i = 0; i < x; i++)
    {
        set_[i] = "";
    }
    set_size = 0;
}

//checks to see if the current set is empty
bool TreeSet::isEmpty()
{

    return (root == NULL);
}

//removes the a node in the set matching the data
bool TreeSet::remove(const string &s)
{
    root = remove_node(root, s);
    return  true;
}

//TreeSet Deconstructor
TreeSet::~TreeSet()
{
    root = NULL;
    delete root;
    //return set_size == 0;
}


int main(int argc, const char * argv[]) {
   /* Testing code
    
   string array[3];
  
    
    string arr[10] = {"1","2","3","4"};
    TreeSet tree(arr,4);
    tree.add("kek");
    tree.add("hello");
    tree.add("world");
    tree.add("kml");
    tree.remove("kek");
    tree.add("kml");
    tree.add("kek");
    tree.add("kek");
    cout << tree.set_size;
    tree.toArray(tree.set_);
    cout << tree.set_size;
   
    tree.add("hel");
    std::cout << tree.size() << "\n";
    tree.add("wor");
    std::cout << tree.size() << "\n";
    tree.add("wor");
    std::cout << tree.size() << "\n";
 */
    
    if (findSoftware())
        if (software_update)
            getSoftware();
            changeSoftwareData() of the attributes requested by management;
        else if (software_delete)
            getSoftware();
            deleteSoftware();

    return 0;
}

