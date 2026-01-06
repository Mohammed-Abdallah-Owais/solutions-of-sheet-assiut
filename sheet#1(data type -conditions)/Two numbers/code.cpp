#include <iostream>
using namespace std;

int main()
{
    float num1 ,num2;
    float myround ;int myfloor; float myceil;float fraction;
    cin>>num1>>num2;
    myfloor = num1/num2;
   
    fraction = (num1/num2) - myfloor; // result is the fraction  2.5 - 2 = .5
    if(fraction < .5)
        myround = myfloor ;
    else
       myround = myfloor + 1 ;
     
    if(fraction==0)
        myceil = myfloor;
    else
        myceil = myfloor + 1;       

    
     cout<<"floor "<<num1<<" / "<<num2<<" = "<<myfloor<<endl;
         cout<<"ceil "<<num1<<" / "<<num2<<" = "<<myceil<<endl;
             cout<<"round "<<num1<<" / "<<num2<<" = "<<myround<<endl;
    return 0;
}