#include<iostream>
using namespace std;

int prime(int n)
{
 int i,c=0;
 for(i=2;i<n;i++)
 {
     if(n%i==0)
     {
         c++;
     }
 }
 if(c>0)
 {
     return(0);
 }
 else{
    return(1);
 }
}

int main(){

  int n;
  cout<<"Enter a positive integer :- ";
  cin>>n;
  int i,p;
  for(i=2;i<(n/2+1);i++)
  {
      p=n-i;
      if(prime(i) && prime(p))
      {
          cout<<"\n"<<n<<"="<<i<<"+"<<p;
      }
  }
  return(0);

}
