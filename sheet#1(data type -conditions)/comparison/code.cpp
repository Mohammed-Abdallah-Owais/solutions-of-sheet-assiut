#include <iostream>
using namespace std ;
int main()
{
    int oparnd1,oparnd2;
    char sign;
    cin>>oparnd1>>sign>>oparnd2;
    if(sign=='>')
    {
        if(oparnd1 > oparnd2)
            cout<<"Right";
        else
        cout<<"Wrong";    

    }else if(sign=='<')
    {
        if(oparnd1 < oparnd2)
            cout<<"Right";
        else
            cout<<"Wrong"; 
    }else if(sign=='=')
    {
        if(oparnd1 == oparnd2)
            cout<<"Right";
        else
            cout<<"Wrong"; 
    }

    return 0;
}