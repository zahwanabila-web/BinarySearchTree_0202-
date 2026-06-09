#include<iostream>
#include<string>
using namespace std;

class node
{
public:
    string info;
    node *leftchild;
    node *rightchild;

    //constructor for node class
    node(string i, node *l, node *r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class binarytree
{
public:
    node *root;

    binarytree()
    {
        root = NULL;
    }

    void insert(string element)
    {
        node *newnode = new node(element, NULL, NULL);
        
        newnode->info = element;
        newnode->leftchild = NULL;
        newnode->rightchild = NULL;

        node *parent = NULL;
        node *currentnode = NULL;

        search(element, parent, currentnode);

        if (parent == NULL)
        {
            root = newnode;
            return;
        }
        if(element < parent->info)
        {
            parent->leftchild = newnode;
        }
        else if(element > parent->info)
        {
            parent->rightchild = newnode;
        }
    }
    // this function searches the current node of the specified node
    // as well as the current node of its parent
    void search(string element, node *&parent, node *&currentnode)
    {
        currentnode = root;
        parent = NULL;

        while (currentnode != NULL && currentnode->info != element)
        {
            parent = currentnode;

            if (element < currentnode->info)
                currentnode = currentnode->leftchild;
            else
                currentnode = currentnode->rightchild;
        }

    }
};
