#include<iostream>
using namespace std;


int main()
{
    int arr[20];
    
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;

    cout<<"Enter the elements of array: "<<endl;
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int heightest_marks = arr[0];
    int index = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > heightest_marks)
        {
            heightest_marks = arr[i];
            index = i;
        }
    }

    cout<<heightest_marks<<" is heighest marks present at index: "<<index<<endl;

    return 0;
}
