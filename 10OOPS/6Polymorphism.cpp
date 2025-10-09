#include<iostream>
using namespace std;

class name {

public:

void hello()
{
    cout<<"say hello1"<<endl;
}

void hello(int a)
{
    cout<<"say hello2"<<endl;
}



};


int main()
{
    name a1;
    a1.hello(2);

    return 0;
}