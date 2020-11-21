#include <iostream>
#include <conio.h>
using namespace std;

 class area{
    public:
    double length
    double breadth
    double height
    
    double calculateArea(){
    return length*breadth;
    }
    double claculateVolume(){
    return length*breadth*height;
    }
    
int main()
{
   area area1;
   area1.length=40.5;
   area1.breadth=20.7;
   area1.height=30;
   
   cout<<"area="<<area1.calculateArea();
  cout<<"volume="<<claculateVolume();
   return 0;
}
