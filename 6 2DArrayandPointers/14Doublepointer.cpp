#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int **q = &p;
    cout<<i<<" "<<&p<<" "<<&*q<<endl;
    cout<<"printing p "<<p<<endl;
    cout<<"print *q "<<*q<<endl;

    return 0;
}