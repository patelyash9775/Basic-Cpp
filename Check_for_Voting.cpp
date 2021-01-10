#include<iostream>

using namespace std;

int main()
{
 int age;
 cout<<"Enter your age :- ";
 cin>>age;
 if(age>=18)
 {
     cout<<"You are eligible for voting because Your age is more than or equal to 18 year";
 }
 else
 {

     cout<<"You are not eligible for voting because Your age is less than 18 year";
     cout<<"\n"<<"Don't worry child. After 18 years old , You can vote. So wait for it..";
 }
 return(0);
}
