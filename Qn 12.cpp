.#include <iostream>
using namespace std;

int fact(int n)
{
if (n==1 || n==0)
    return 1;
else
    return n*(fact(n-1));
}

int main()
{
    int num,fac;
    cout<<"Enter number: ";
    cin>>num;
    fac=fact(num);
    cout<<"Factorial="<<fac;
    return 0;
}