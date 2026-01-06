#include <iostream>
using namespace std ;
int main()
{
    int L1,R1,L2,R2;
    cin>>L1>>R1>>L2>>R2;
    if(L1>R2 || L2 >R1)
        cout<<-1;
    else if(L1==L2&&R1==R2)
        cout<<L1<<" "<<R1;    
    else if(L1 == R2)
            cout<<L1<<" "<<R2;
    else if (L2==R1)
            cout<<L2 <<" "<<R1;        
    else if(L2>=L1 && R1>=R2)     
        cout<<L2<<" "<<R2  ;
    else if(L2>=L1 && R1<=R2) 
           cout<<L2<<" "<<R1; 
    else if(L2<=L1 && R2<=R1)
        cout<<L1<<" "<<R2;
    else if(L2<=L1 && R2>=R1)
     cout<<L1<<" "<<R1;           
    return 0 ;
}




/*
another simple sloution 
int main()
{
    int L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;

    int start = max(L1, L2);
    int end = min(R1, R2);

    if (start > end)
        cout << -1;
    else
        cout << start << " " << end;

    return 0;
}
*/