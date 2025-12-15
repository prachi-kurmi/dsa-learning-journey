#include<iostream>
using namespace std;

int main()
{
    // 5 students, store the marks of 5 students

    int marks1 = 70, marks2 = 80, marks3 = 40, marks4 = 50, marks5 = 90;

    // Printing the marks
    cout<<marks1<<endl;
    cout<<marks2<<endl;
    cout<<marks3<<endl;
    cout<<marks4<<endl;
    cout<<marks5<<endl;

    // Now store the marks of 100 students and average of all student marks?
    cout<<(marks1+marks2+marks3+marks4+marks5)/5<<endl;

    // Become difficult to store and take the average of 100 student
    // so we have array

    // array declaration, store integer type value, initilization of array
    int marks[5] = {70, 80, 40, 50, 90};

    cout<<marks[0]<<endl;  //Printing the first value
    cout<<marks[3]<<endl;

    // Printing all the values
    for(int i = 0; i < 5; i++)
    {
        cout<<marks[i]<<" ";
    }

    cout<<endl;

    // Array Declare
    int arr[3];

    // Initilize 
    arr[0] = {2};
    arr[1] = {4};
    arr[2] = {4};

    // Printing 
    for(int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // If we put value then it will print garbage value

    int arr_1[4];

    for(int i = 0; i < 4; i++)
    {
        cout<<arr_1[i]<<endl;
    }


    // why array start from index 0

    int a = 10;
    int b = 10;

    // they will store somewhere in the RAM
    // both have same value and you want to change from 10 -> 20 then how will you know which 10 you have to make 20
    // that why address are needed 


    // printing the address
    cout<<&a<<endl;
    cout<<&b<<endl;
    
    // array store in a contiguous location and memory is byte addressable
    // due to address calculation it start from 0
    // in early days the system are not that much strong so to make the calculation easy it str from zero index



    // can we make array dynamic type
    // int n;
    // cout<<"Enter the size of an array: "<<endl;
    // cin>>n;

    // int arr_2[n];

    // cout<<"Enter the elements of array: "<<endl;
    // for(int i = 0; i < n; i++)
    // {
    //     cin>>arr_2[i];
    // }

    // cout<<"Printing the array: "<<endl;
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<arr_2[i]<<" ";
    // }

    // cout<<endl;

    // in future lecture we will explore why should we not take array size as a variable type
}
