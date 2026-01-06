#include <iostream>
using namespace std ;
int main()
{
    int oparnd1,oparnd2,inpResult;
    char sign,q;
    cin>>oparnd1>>sign>>oparnd2>>q>>inpResult;
    if(sign=='+')
    {
        if((oparnd1 + oparnd2) == inpResult)
            cout<<"Yes";
        else
         cout<<oparnd1 + oparnd2;    

    }else if(sign=='-')
    {
        if((oparnd1 - oparnd2)==inpResult)
            cout<<"Yes";
        else
            cout<<oparnd1 - oparnd2; 
    }else if(sign=='*')
    {
        if((oparnd1 * oparnd2) == inpResult)
            cout<<"Yes";
        else
            cout<<(oparnd1 * oparnd2); 
    }

    return 0;
}