#include<iostream>
using namespace std;

//1.multiple inheritance
//2.multilevel inheritance
//3.Hierarchical inheritance

class vehicle{
    public:
        int noofwheel=6;
        char engno[10]="xyz123";
};

class car{
    protected:
        char color[10]="blue";
  
};

class audi: public vehicle, public car
{
    private:
        char regno[10]="mh17";
    public:
        void displaydata()
        {
           cout<<"The details are : ";
           cout<<"\nNo. of wheel : "<<noofwheel;
           cout<<"\nColor : "<<color;
           cout<<"\nEngno : "<<engno;
           cout<<"\nregno : "<<regno;
        }
};

int main()
{
    audi a;
    a.displaydata();
    return 0;
    
}