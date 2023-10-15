#include <iostream>
using namespace std;

int main()
{
int last,rem=0,num,p=0,pos;
cout<<"Enter number: ";
cin>>num;
    last=-1;
    if (last<rem)
    {
        last=rem;
        rem=num%10;
        num=num/10;
        p=0;
        last=rem+1;
    }
    else if (last>rem)
    {
        last=rem;
        rem=num%10;
        num=num/10;
        p=1;
    }
    if (p==1)
        cout<<"Hill nuumber";
    else
        cout<<"Not a  hill number";
return 0;
}