#include<iostream>

using namespace std;

int main()
{
 int arr[5];
 cout<<"Enter elements: ";
 int *p;
 p=arr;
 for(int i=0;i<5;i++)
 {
     cin>>*(p+i);
 }
 cout<<"\nYou entered: ";
 for(int i=0;i<5;i++)
 {
     cout<<*(p+i)<<endl;
 }
 return 0;
}
