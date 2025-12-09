#include<iostream>
using namespace std;

int main()
{
    cout<<"1. Reverse Number =============================="<<endl;

    int reverse_num;
    int reverse_ans = 0;

    cout<<"Enter a number to reverse it: "<<endl;
    cin>>reverse_num;

    while(reverse_num != 0)
    {
        int last_digit = reverse_num % 10;

        reverse_ans = reverse_ans * 10 + last_digit;

        reverse_num = reverse_num / 10;
    }

    cout<<"Reversed number is: "<<reverse_ans<<endl;
    cout<<endl;

    cout<<"2. Decimal To Binary =============================="<<endl;

    int decimal_num , binary_ans = 0, multiplier = 1;

    cout<<"Enter the decimal number: "<<endl;
    cin>>decimal_num;

    while (decimal_num != 0)
    {
        int rem = decimal_num % 2;

        decimal_num /= 2;
        
        binary_ans = binary_ans + rem * multiplier;

        multiplier *= 10;
    }
    

    cout<<"Binary number is: "<<binary_ans<<endl;
    cout<<endl;

    cout<<"3. Binary To Decimal =============================="<<endl;

    int binary_num, decimal_ans = 0, mul = 1;

    cout<<"Enter the Binary number: "<<endl;
    cin>>binary_num;

    while (binary_num != 0)
    {
        int rem = binary_num % 10;

        binary_num /= 10;
        decimal_ans = decimal_ans + rem * mul;

        mul *= 2;
    }

    cout<<"Decimal number is: "<<decimal_ans<<endl;

    cout<<endl;

    cout<<"4. Factorial of Number =============================="<<endl;

    long long fact_num; 
    int fact_mul = 1;

    cout<<"Enter the number for a factorial: "<<endl;
    cin>>fact_num;

    for(int i = 1; i <= fact_num; i++)
    {
        fact_mul = fact_mul * i;
    }

    cout<<"Factorail is: "<<fact_mul<<endl;
    cout<<endl;

    cout<<"5. Fibonacci Series =============================="<<endl;

    int fibonacci_num;
    int first = 0, second = 1;

    cout<<"Enter a number for a fibonacci series: "<<endl;
    cin>>fibonacci_num;

    cout<<first<<" "<<second<<" ";
    for(int i = 2; i <= fibonacci_num; i++)
    {
        int ans = first + second;
        cout<<ans<<" ";
        first = second;
        second = ans;
    }

    cout<<endl;
    return 0;
}
