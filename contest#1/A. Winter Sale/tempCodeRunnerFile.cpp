#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(2);
    double x,p,r;
    cin>>x>>p;
    r = p/(1-(x/100));
    cout<<r;
    return 0;
}