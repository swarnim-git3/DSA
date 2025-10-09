// pointers stores the address
// pointer only stoes the address of 8 byte whether it is int ,double ,char,string and so on
#include <iostream>
using namespace std;

int main()
{
    char num[] = "asde";
    cout << "value of num is " << num << endl;
    cout << "Address of num is " << &num << endl;

    char *ptr = &num[0];
    cout << "value stored at num is " << *ptr << endl;
    cout << "address stored at the ptr is  " << ptr << endl;
    cout << "address of pointer ptr is  " << &ptr << endl;

    // int *p = 0;                 //this is bad practice it gives error
    // cout << "the address where  0 is stored is " << *p << endl;      


    //copying a pointer
    // int *q = ptr;
    // cout <<*ptr <<" - " <<*q<<endl;
    // cout <<ptr <<" - " <<q<<endl;


    int i=3;
    int *t=&i;
   t=t+1;
    cout<<"the value of I is "<<i<<" "<<(*t)<<endl;

cout<<t<<endl;
cout<<t+1;


    return 0;
}