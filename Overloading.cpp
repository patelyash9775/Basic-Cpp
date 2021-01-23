#include<iostream>

using namespace std;

class printdata
{
public:
    void print(int a){
        cout<<"Printing int : "<<a;
    }

    void print(double a){
        cout<<"Printing double : "<<a;
    }

    void print(string a){
        cout<<"Printing string : "<<a;
    }
    
};

int main()
{
 printdata pd;

 pd.print(25);
 cout<<endl;
 pd.print(24.35);
 cout<<endl;
 pd.print("Jay Swaminarayan");
 return(0);

}

