#include <iostream>
using namespace std;
int sum(int n)
{
    int s=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    return s;
}
int main()
{
    int a,b;
    cout<<"enter 1st no"<<endl;
    cin>>a;
    cout<<"Enter 2nd no"<<endl;
    cin>>b;
    int s1=sum(a);
    int s2=sum(b);
    if(s1==b && s2==a)
    cout<<"Amicable number";
    else
    cout<<"not amicable no";
    return 0;
}