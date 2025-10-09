#include <iostream>
using namespace std;

int main()
{
    int i[10] = {8, 6, 1, 4, 5, 9, 3, 2, 5, 7};
    cout << "the address of first memory block of array i is " << i << endl;
    cout << "the address of first memory block of array i is " << &i[1] << endl;
    cout << "the address of second memory block of array i is " << &i[2] << endl;
    cout << "the address of third memory block of array i is " << &i[3] << endl;
    cout << "the value of array i at 0th index is " << *(i) << endl; //   * is called the dereference operator
    cout << "the address of third memory block of array i is " << *(i + 1) << endl;

    int *p = i;
    cout << "This will print the address of first element in array i " << p;

    int temp[10] = {1, 2, 3, 4, 5, 6, 45, 4, 3, 2};
    cout << sizeof(temp);

    int *ptr = &temp[3];
    cout << sizeof(ptr) << endl;

    // for characters
    cout << "now we start characters" << endl
         << endl
         << endl;
    char ch[6] = "abcde";
    cout << "The ch stores " << ch << endl;
    cout << "The ch at 2 stores " << ch[2] << endl;

    char *c = &ch[0];
    cout << "the c prints the whole array " << *c << endl;

    char tempo = 'z';
    char *t = &tempo;
    
    cout<< t ;

    return 0;
}