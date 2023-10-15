#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n==0 || n==1)
        return n;
    else 
        return fibo(n-1)+fibo(n-2);
}

int main()
{
    int num=40;
    cout<<"Fibonacci series till 40 terms: "<<fibo(num);
}
