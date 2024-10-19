#include <iostream>
using namespace std;
int main() {

int marks;
cout<<"Enter your marks: ";
cin>>marks;

if(marks>=90 && marks<=100)
{
    cout<<"Grade A";
}

else if(marks>=75 && marks<90)
{
    cout<<"Garde B";

}

else if(marks>=50 && marks<75)
{
    cout<<"Garde C";

}

else if(marks>=0 && marks<50)
{
    cout<<"Grade F";
}

else{
    cout<<"Invalid Input."<<"\n"<<"Enter a number between 0 and 100.";
}

    return 0;
}