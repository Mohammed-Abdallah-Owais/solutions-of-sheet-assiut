#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(3);
    float num ;
    cin>>num;
    int intValue = (int(num));
    float fraction =  num - intValue ;
    if(fraction>0)
        cout<<"float "<<intValue<<" "<<fraction;
    else 
        cout<<"int "<<intValue;
    
    return 0 ;
}
