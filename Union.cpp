#include<iostream>

using namespace std;

enum week{
monday,tuesday,wednesday,thursday,friday,saturday
};

int main(){

    enum week day;
    day=wednesday;
    cout<<"day = "<<day;
    return 0;
}
