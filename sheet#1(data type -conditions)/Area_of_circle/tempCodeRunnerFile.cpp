#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(9);
    const double BI = 3.141592653;
    double r;
    cin>>r;
    cout<<BI*r*r;
    return 0;
}