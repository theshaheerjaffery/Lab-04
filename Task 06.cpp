#include <iostream>
using namespace std;
int main() {

string colour;
cout<<"Choose a colour of Traffic Light."<<endl;
cin>>colour;

if(colour=="red")
{
    cout<<"Stop Your Vehicle.";
}

else if(colour=="yellow")
{
    cout<<"Get Ready to Move.";
}

else if(colour=="green")
{
    cout<<"You Can GO!";
}

else{
    cout<<"Invalid Colour.";
}

    return 0;
}