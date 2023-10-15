#include <iostream>
using namespace std;

int euclid(int m,int n)
{
    if (n!=0)
    return euclid(n,m%n);
    else
    return m;
}
 
int main()
{
    int num1, num2, result;
    cout << "Enter two numbers to find GCD using Euclidean algorithm: ";
    cin >> num1 >> num2;
    result = euclid(num1, num2);
    cout<<"GCD of the two numbers: "<<result;
}