#include <iostream>
using namespace std; 
int main()
{
    int age;// age in days
    cin>>age;
    int year = age /365; 
    int monthes  = (age -(year*365)) / 30;
    int days = (age-((year*365)+(monthes*30)));
    cout<<year<<" years"<<endl<<monthes<<" months"<<endl<<days<<" days"; 
    return 0;
}