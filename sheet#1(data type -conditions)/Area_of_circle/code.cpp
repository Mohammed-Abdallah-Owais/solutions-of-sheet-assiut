#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    /*Use setprecision(9) to print 9 digits after decimal point.
*** you can use function setprecision that are in #include<iomanip> library */
//can use this in modern c++ ----->        std::cout << std::format("{:.9f}", num);
    cout<<fixed<<setprecision(9);
    const double BI = 3.141592653;
    double r;
    cin>>r;
    cout<<BI*r*r;
    return 0;
}