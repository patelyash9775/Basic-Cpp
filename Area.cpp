#include<iostream>

using namespace std;

void circle()
{
    int r;
    cout<<"Enter the radius : ";
    cin>>r;
    float area = 3.14*r*r;
    cout<<"\nThe area of the circle is : "<<area;
}

void square()
{
    int r;
    cout<<"Enter the side : ";
    cin>>r;
    float area = r*r;
    cout<<"\nThe area of the square is : "<<area;
}

void rectangle()
{

    int l,b;
    cout<<"Enter the length and breath : ";
    cin>>l>>b;
    float area = l*b;
    cout<<"\nThe area of the rectangle is : "<<area;

}

main()
{
    int choice;
    do{
    cout<<"\nPick one : \n1. Circle\n2. Square\n3. Rectangle\n4. Quit\n";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        circle();
        break;
    case 2:
        square();
        break;
    case 3:
        rectangle();
        break;
    case 4:
        exit(0);
        break;
    default:
        cout<<"Invalid choice";
    }
    }while(choice<4);
}
