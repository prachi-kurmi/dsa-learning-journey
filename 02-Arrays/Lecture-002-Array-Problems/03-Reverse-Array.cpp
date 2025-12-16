/*
  ============================== Question (Reverse Array) =========================
  Take the array input from the user and return the reversed array

  input -> arr[5] = {6, 11, 7, 4, 8, 9}
  output -> {9, 8, 4, 11, 6};

  Note: You have to store actually in an array you can't solve it by printing the element on console
  and store it in the same array which is given by the user

*/


#include<iostream>
using namespace std;
    
int main()
{    
    int size;
    int arr[10];
    cout<<"Enter the size of an array: "<<endl;
    cin>>size;

    cout<<"Enter the elements of an array: "<<endl;
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i <= size/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    cout<<"Printing the reversed array: "<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}
