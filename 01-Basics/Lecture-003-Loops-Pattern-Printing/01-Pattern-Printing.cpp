#include<iostream>
using namespace std;

int main()
{
    for(char i = 'a'; i <= 'z'; i++)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    // it will compare it with ascii value (a = 97, z = 122)


    // sum of first 10 number 

    int sum = 0; 
    // if we don't initialize it will have some random value 
    for(int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }

    cout<<"Sum of first 10 number: "<<sum<<endl;

    //sum of square of first 10 natural number

    int natural_sum = 0;

    for(int i = 1; i <= 10; i++)
    {
        sum = sum + i*i;
    }

    cout<<"Sum of square of first 10 natural number: "<< sum<<endl;


    /* 1 2 3 4 5
       1 2 3 4 5
       1 2 3 4 5
       1 2 3 4 5
       1 2 3 4 5 
    */

    cout<<"Pattern Printing 1 ========================="<<endl;
    for(int i = 1; i <=6; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout<<i<<" ";
        }

        cout<<endl;
        
    }


    /* a b c d e
       a b c d e
       a b c d e
       a b c d e
       a b c d e
    */

    cout<<"Pattern Printing 2 ========================="<<endl;
    for(char i = 0; i < 5; i++)
    {
        for (char j = 'a'; j <= 'e'; j++)
        {
           cout<<j<<" ";
        }

        cout<<endl;
    }
    

    //Printing the number from 10 to 1

    cout<<"Reverse Number ========================"<<endl;
    for(int i = 10; i >= 1; i--)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    //Table Program

    cout<<"Table Program ======================"<<endl;

    int table_num = 7;

    for(int i = 1; i <= 10; i++)
    {
        cout<<table_num<<" * "<<i<<" = "<<i*table_num<<endl;
    }


    /* 
       * * * * *
       * * * * * 
       * * * * *
       * * * * *
       * * * * *
    */
    cout<<"Pattern Printing 3 ========================="<<endl;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    /* 
       * 
       * * 
       * * * 
       * * * * 
       * * * * *
    */

    cout<<"Pattern Printing 4 ========================="<<endl;

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    /* 
       * * * * *
       * * * *  
       * * * 
       * * 
       * 
    */

    cout<<"Pattern Printing 5 ========================="<<endl;

    for(int i = 5; i >= 1; i--)
    {
        for(int j = 0; j < i; j++)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    /* 
               *
             * * 
           * * *
         * * * *
       * * * * *
    */

    // 4 space 1 star, 5 - 4 space
    // 3 space 2 star, 5 - 3 space
    // 2 space 3 star
    // 1 space 4 star
    // 0 space 5 star


    cout<<"Pattern Printing 6 ========================="<<endl;

    for(int i = 4; i >= 0; i--)
    {
        // space
        for(int j = 0; j < i; j++)
        {
            cout<<"  ";
        }

        // star
        for(int j = 0; j < 5 - i; j++)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    /* 1 2 3 4 5
       6 7 8 9 10
       11 12 13 14 15
       16 17 18 19 20
       21 22 23 24 25 
    */
    cout<<"Pattern Printing 7 ========================="<<endl;

    for(int i = 1; i <= 21; i += 5)
    {
        for(int j = i; j <= i + 4; j++)
        {
            cout << j<< " ";
        }

        cout<<endl;
    }

}
