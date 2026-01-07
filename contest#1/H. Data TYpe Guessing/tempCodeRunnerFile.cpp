#include <iostream>
#include <limits>
using namespace std;
int main()
{
    long long n,k,a;
    cin>>n>>k>>a;
    if((n*k)%a != 0)
        cout<<"double";
    else
    {
        long long equation = (n*k)/a;
        if(equation > numeric_limits<int>::max() )
            cout<<"long long";    
        else
             cout<<"int";
    } 
    

    return 0;
}