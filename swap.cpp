#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num1,num2,temp;
    cout<<"Enter thr number to be swapped numbers:\n";
    cin>>num1>>num2;
    cout<<"before swapping."<<endl;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
     
     temp = num1;
     num1 = num2;
     num2 = temp;


    cout<<"\nAfter swapping."<<endl;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    return 0;
}
