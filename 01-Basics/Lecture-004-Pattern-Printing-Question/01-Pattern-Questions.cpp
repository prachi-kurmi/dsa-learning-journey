#include<iostream>
using namespace std;

int main()
{
    cout<<"Pattern Printing - 1 ================================"<<endl;
    /* 1
       0 1
       1 0 1
       0 1 0 1 
       1 0 1 0 1
    */
    for(int i = 1; i <= 5; i++)
    {
        bool num = i % 2;

        for(int j = 0; j < i; j++)
        {
            cout<< num <<" ";
            num = !num;
        }

        cout<<endl;
    }

    cout<<"Pattern Printing - 2 ================================"<<endl;
    
    /* A
       A B
       A B C
       A B C D 
       A B C D E
    */

    for(char i = 'B'; i < 'G'; i++)
    {
        for(char j = 'A'; j < i; j++)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }

    cout<<"Pattern Printing - 3 ================================";
    
    /* A
       B B
       C C C
       D D D D 
       E E E E E
    */

    for(int i = 0; i <= 5; i++)
    {
        char ch = 'A' + i - 1;
        for(char j = 0; j < i; j++)
        {
            cout<<ch<<" ";
        }

        cout<<endl;
    }


    cout<<"Pattern Printing - 4 ================================"<<endl;
    
    /*          1
              1 2 1
            1 2 3 2 1
          1 2 3 4 3 2 1 
        1 2 3 4 5 4 3 2 1
    */

    // spaces
    // number increasing
    // number decreasing

    for(int i = 4; i>=0; i--)
    {
        // space print depends on i
        for(int j = 1; j <= i; j++)
        {
            cout<<"  ";
        }

        // increasing number: 1 to 5 - i;
        for(int j = 1; j <= 5 - i; j++)
        {
            cout<< j<< " ";
        }

        // decreasing number: 5 - i - 1 to 1
        for(int j = 5 - i - 1; j >= 1; j--)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }


    // cout<<"Prime Number ================================"<<endl;

    // int num;
    // cout<<"Enter the number to check prime: "<<endl;
    // cin>>num;
    // bool prime = 0;

    // if(num < 2)
    // {
    //     cout<<num<<" is not a prime number"<<endl;
    //     return 0;
    // }

    // for(int i = 2; i <= num - 1; i++)
    // {
    //     if(num % i == 0)
    //     {
    //         cout<<num<<" is not a prime number"<<endl;
    //         prime = 1;
    //         break;
    //     }
    // }


    // if(prime == 0)
    // {
    //     cout<<num<<" is a prime number."<<endl;
    // }

    cout<<"Sum of digit ======================="<<endl;

    int number;
    int sum = 0;

    cout<<"Enter the number to calculate sum of digit: "<<endl;
    cin>>number;

    while(number > 0)
    {
        int rem = number % 10;
        sum += rem;

        number /= 10;
    }

    cout<<"Sum of digit are: "<<sum<<endl;

  return 0;

}
