#include<iostream>
using namespace std;

class student{
    private:
        int regno;
        int marks[5];
        char name[20];
        char grade;
    public:
        enterdetails();
        char calculategrade(){
            int sum;
            for(int i=0;i<5;i++)
            {
                sum=sum+i;
            }
            if(sum>400)
                grade='O';
            else if(sum>300)
                grade='A';
            else if(sum>200)
                grade='B';
            else if(sum>100)
                grade='C';
            else
                grade='F';
        }
        displayresult();
};

student::enterdetails(){

    cout<<"Enter the following details : ";
    cout<<"\n1. Registration Number: ";
    cin>>regno;
    cout<<"\n2. Marks in 5 subjects : ";
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }
    cout<<"\n3. Name : ";
    cin>>name;
}

student::displayresult(){
    cout<<"\nThe details that you entered : ";
    cout<<"\n1. Registration Number : "<<regno;
    cout<<"\n2. Name : "<<name;
    cout<<"\n3. Grade = "<<grade;
}

int main()
{
    student s1;
    s1.enterdetails();
    s1.calculategrade();
    s1.displayresult();
    return(0);
}