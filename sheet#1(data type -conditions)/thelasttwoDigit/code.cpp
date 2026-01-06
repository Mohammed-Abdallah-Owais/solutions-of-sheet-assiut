#include <iostream>
using namespace std;
int main()
{
   long long a,b,c,d;
   cin>>a>>b>>c>>d;
   int lastTwoA = a%100;
   int lastTwob = b%100;
   int lastTwoc = c%100;
   int lastTwod = d%100;
   long long res= (lastTwoA*lastTwob*lastTwoc*lastTwod)%100;
   if(res<10) cout<<'0'; 
   cout<<res;
    return 0;
}