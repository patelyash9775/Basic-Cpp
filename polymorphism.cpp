#include<iostream>

using namespace std;

int area(int s)
{
    int a = s*s;
    return(a);
}

int area(int l,int b)
{
    int a = l*b;
    return(a);
}

int main()
{
cout<<"Pick one : \n1. Square \n2. Rectangle \n3. Exit";
int choice,s,l,b;
cout<<"\nEnter your choice : ";
cin>>choice;
switch (choice)
{
case 1:
    cout<<"\nEnter the side : ";
    cin>>s;
    cout<<"\nThe area of the square is : "<<area(s);
    break;
case 2:
    cout<<"\nEnter the length and breadth : ";
    cin>>l>>b;
    cout<<"\nThe area of the rectangle is : "<<area(l,b);
    break;   
case 3:
    exit(0);
    break;
default:
    cout<<"\nInvalid choice";
    break;
}
return(0);
}