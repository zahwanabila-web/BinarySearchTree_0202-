#include <iostream>
using namespace std;

class node
{
public:
    string info;
    node *leftchild;
    node *rightchild;

    // constructor for node class
    node(string i, node *l, node *r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};