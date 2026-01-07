#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int fDigit = num%10;
    int sDigit = num/10;
    if(fDigit%sDigit==0 || sDigit%fDigit==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}

