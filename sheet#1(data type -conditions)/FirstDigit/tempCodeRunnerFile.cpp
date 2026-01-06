#include <iostream>
using namespace std; 
int main()
{
    int inp;
    cin>>inp;
    int fDigit = inp/1000;
    if(fDigit%2==0)
       cout<<"EVEN";
    else
        cout<<"ODD";   
    return 0;
}