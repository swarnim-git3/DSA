#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void printarray(int arr[], int size)

{
   cout << "print the array";
   for (int j = 0; j < size; j++)
   {
      cout << "the array is  "  <<arr[j]<< endl;
   }
}

int main()
{ // first way of initialization of array
   int a[4] = {3, 5, 6, 2};

   // this will initilize whole array with value 0
   int b[100] = {0};

   // uses header file "cstring"
   // this initialization work for only '0' and '-1'
   // can also be used for characters
   // SYNTAX <<    memset(variable name , digit or character , sizeof (variable name));   >>
   int c[100] = {};
   memset(c, -1, sizeof(c));

   int count = 1;
   for (int i = 0; i < 100; i++)
   {
      cout << " the  value  of array at " << count << " is " << c[i] << endl;
      count++;
   }

   // for characters
   char d[100];
   memset(d, 's', sizeof(d));
   count = 1;
   for (int i = 0; i < 100; i++)
   {
      cout << " the  value  of array at " << count << " is " << d[i] << endl;
      count++;
   }

   // for any other number
   // also work for characters
   // uses header file "algorithm"
   // SYNTAX  <<  fill(begin(variable name) , end (variable name ) , digit);  >>
   int e[100];
   fill(begin(e), end(e), 32);

   count = 1;
   for (int i = 0; i < 100; i++)
   {
      cout << " the  value  of array at " << count << " is " << e[i] << endl;
      count++;
   }

   // for some of the first numbers
   // this will print first 20 number with given value and then will assign garbage values

   int f[100];
   fill(begin(f), begin(f) + 20, 25);

   count = 1;
   for (int i = 0; i < 100; i++)
   {
      cout << " the  value  of array at " << count << " is " << f[i] << endl;
      count++;
   }

   // by using function

   printarray(f,25);

   return 0;
}