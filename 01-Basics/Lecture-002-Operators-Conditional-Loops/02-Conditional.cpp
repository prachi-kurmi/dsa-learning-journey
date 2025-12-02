#include<iostream>
using namespace std;

int main()
{

    /* int age;

    cout<<"Enter Your Age: "<<endl;
    cin>>age;

    if(age >= 18)
    {
        cout<<"You are eligible for vote.";
    }

    else
    {
        cout<<"Not Eligible";
    }
    */

  /*
    int marks;

    cout<<"Enter your marks: "<<endl;
    cin>>marks;

    if(marks >= 33)
    {
        cout<<"You are pass.";
    }

    else
    {
        cout<<"You are fail.";
    } */


  /*
    int marks;
    cout<<"Enter your marks: "<<endl;
    cin>>marks;


    if(marks > 90)
    {
        cout<<"Grade: A+";
    }

    else if( marks > 80 && marks <= 90)
    {
        cout<<"Grade: A";
    }

    else if( marks > 70 && marks <= 80)
    {
        cout<<"Grade: B+";
    }

    else if( marks > 60 && marks <= 70)
    {
        cout<<"Grade: B";
    }

    else
    {
        cout<<"Grade: C";
    }
   */

   int day;
   cout<<"Enter your day: ";
   cin>>day;

   switch (day) {
   case 1: 
    cout<<"Monday";
    break;

   case 2:
    cout<<"Tuesday";
    break;

   case 3:
    cout<<"Wednesday";
    break;

   case 4:
    cout<<"Thursday";
    break;

   case 5:
    cout<<"Friday";
    break;

   case 6:
    cout<<"Saturday";
    break;

   case 7:
    cout<<"Sunday";
    break;

   default:
   cout<<"Invalid Day";
    break;
   } 
  
   return 0;
    
}
