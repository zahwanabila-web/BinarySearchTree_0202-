#include <iostream>
using namespace std;

class Node
{
public:
    string info;
    Node *leftchild;
    Node *rightchild;

    // constructor for node class
    Node(string i, Node *l, Node *r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = NULL; //Initializing ROOT to NULL
    }

    //Insert a node in the binary search tree
    void insert(string element)
    {

    }
};