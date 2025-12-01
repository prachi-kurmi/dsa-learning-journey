// int main() {
//     int a = 10;

//     return 0;
// }

// code run with warning 

// cin and cout are not part of core C++ language


// data type:
// Number: 1, 2, 3, 4, 5 (int)
// Float: 1.2, 2.67, 8.213 (float)
// char: 'a', 'b'
// string: "Hello Coder army"

// int a = 10;
// we have to define which type of data we want to store


// if we want to print something then we have to import some external library

#include<iostream>
using namespace std;
// these header file inculde code which know the meaning of std
int main()
{
    int a = 10;

    // std::cout<<a;
    cout<<a<<endl; // instead of writing std again and again we use namespace std


    cout<<sizeof(a);
    // tells how much memory a variable takes (in bytes)

    string name = "damon";
    cout<< name<<endl;

    cout<< name.length()<<endl;

    return 0;
}
