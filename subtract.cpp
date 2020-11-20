#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int result,num1,num2;
    cout<<"Enter two numbers:\n";
    cin>>num1>>num2;

    result=subNum(num1,num2);
     cout<<"subtraction of given two numbers: "<<result;
     getch();
    return 0;
}
