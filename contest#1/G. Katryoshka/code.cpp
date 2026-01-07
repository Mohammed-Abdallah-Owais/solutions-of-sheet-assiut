#include <iostream>
using namespace std;
int main()
{
    long long  n,m,k,count;
    cin>>n>>m>>k;
    if(m>0)
    {
       long long mi = min(n, min(m, k));
        count = mi;
        n -= mi; k -= mi ; 
        mi = min(n/2,k);
        count += mi;
    }
    else
      count = min(n/2,k);
    cout<<count;  
    return 0;
}