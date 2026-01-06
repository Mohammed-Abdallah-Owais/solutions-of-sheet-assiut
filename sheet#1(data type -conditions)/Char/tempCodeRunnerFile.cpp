#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>=65&&ch<=90)
        ch = ch + 32; //will convert to lowercase

    else if(ch>=97&&ch<=122)
        ch = ch-32; //will convert it to uppercase
    else
        cout<<"wrong input";
    cout<<ch;            
    return 0 ;
}