#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    char re = ch + 1;
    if(re-1==122)
    {
        re = 97;
        cout<<re;
    }else
           cout<<re;
        
 
    return 0;
}