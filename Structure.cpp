#include<iostream>
using namespace std;

struct bike{

 int lno;
 char name[20];
 float miles;

};

int main()
{
  struct bike b1;
  cout<<"Enter license No. :- ";
  cin>>b1.lno;
  cout<<"\nEnter a bike name :- ";
  cin>>b1.name;
  cout<<"\nEnter a miles :- ";
  cin>>b1.miles;

  cout<<"\nlicense No = "<<b1.lno;
  cout<<"\nbike name = "<<b1.name;
  cout<<"\nMiles = "<<b1.miles;

}
