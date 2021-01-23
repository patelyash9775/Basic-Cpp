#include<iostream>
#include<cstring>

using namespace std;

int main()
{
  char time[20];
  cout<<"The time is : ";
  cin>>time;
  char *token;
  token=strtok(time,":");
  int a[3],i=0;
  while(token!=NULL)
  {
     sscanf(token,"%d",&a[i]);
     i++;
     token=strtok(NULL,":");
  }
 
 int second=0;
 second=a[0]*3600;
 second=second+a[1]*60;
 second=second+a[2];
 cout<<"Time in total seconds : "<<second;
}