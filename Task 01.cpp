#include <iostream>
using namespace std;
int main() {

float num1;
float num2;
string operation;
float result;

cout<<"Enter first number"<<endl;
cin>>num1;
cout<<"Enter an operator such as plus, minus, multiply, divide"<<endl;
cin>>operation;
cout<<"Enter second number"<<endl;
cin>>num2;

int sum=num1+num2;
int sub=num1-num2;
int mul=num1*num2;
float divide=num1/num2;

if(operation=="plus")
{
    cout<<sum;
}

else if(operation=="minus")
{
    cout<<sub;
}

else if(operation=="multiply")
{
    cout<<mul;
}

else if(operation=="divide")
{
    cout<<divide;
}

else 
{
    cout<<"Invalid operator";
}

    return 0;
}