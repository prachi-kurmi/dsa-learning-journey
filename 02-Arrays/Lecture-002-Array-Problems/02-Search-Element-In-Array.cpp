/*
  ======================== Question (Search Element) ================================
  You are given an array arr[5] = {10, 20, 7, 11, 8, 4}

  Your task is to find out the element = 11 is exist in the array or not 
  If exist then return the element with index and if not simplfy print the message on console

  Additional :
  -> Take the input array and element from the user
  -> Then return element with index

*/

#include<iostream>
using namespace std;

int main()
{
    int size; // for taking the array size from the user 
    int given_element;
    int arr[20];
    int index = -1;

    cout<<"Enter the size of an array: "<<endl;
    cin >> size;

    cout<<"Enter the element of array: "<<endl;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout<<"Enter the element you want to find out: "<<endl;
    cin>> given_element;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == given_element)
        {
            index = i;
            cout<<"Element "<<given_element<<" is present at index "<< index<<endl;
            break;
        }
    }

    if(index == - 1)
    {
        cout<<"Element "<<given_element<<" is not present in the array."<<endl;
    }

    return 0;

}
