#include <iostream>
using namespace std;
int main () {

int num;
cout<<"Enter a Number"<<endl;
cin>>num;

if(num > 0)
{
    cout<<"The Number is Positive";
}

else if(num < 0)
{
    cout<<"The Number is Negative";
}

else{
    cout<<"The number is 0";
}

    return 0;
}