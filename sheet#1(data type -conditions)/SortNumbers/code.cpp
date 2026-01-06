#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b)
    {
        if(a<c)
        {
            cout<<a<<endl;
            if(b<c)
            {
                cout<<b<<endl;
                cout<<c<<endl;
            }
            else
            {
                cout<<c<<endl;
                cout<<b<<endl;
            }

        }
        else
        {
            if(c<b)
            {
                cout<<c<<endl;
                cout<<a<<endl;
                cout<<b<<endl;
            }else
            {
                cout<<b<<endl;
                cout<<c<<endl;
                cout<<a<<endl;
            }
        }

    }  
    else
    {
        if(b<c)
        {
            cout<<b<<endl;
            if(a<c)
            {
                cout<<a<<endl;
                cout<<c<<endl;
            }
            else
            {
                cout<<c<<endl;
                cout<<a<<endl;
            }
        }
        else
        {
           cout<<c<<endl;
           cout<<b<<endl;
           cout<<a<<endl;
        }
    }
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c;
    return 0 ;
}