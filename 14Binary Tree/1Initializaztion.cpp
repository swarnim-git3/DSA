#include<iostream>

using namespace std;

class tree
{

public:
int data;
  tree* left;
  tree* right;

tree (int d)
{
  data=d;
  left=NULL;
  right=NULL;
}

};

tree* buildtree(tree* root)
{
cout<<"Enter the data for node"<<endl;
int data;
cin>>data;
root=new tree(data);



}

int main()
{
  tree* root=NULL;
  
  //creating a tree
  root=buildtree(root);

}