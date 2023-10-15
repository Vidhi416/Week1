#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int num,temp,temp2,temp3,rem,b,i;
  cout << "Enter a number: ";
  cin >> num;
  b=0, i = 1;
  temp = num;

  while(temp!=0)
  {
    rem = temp % 2;
    temp /= 2;
    b += rem * i;
    i *= 10;
  }
  temp2 = num;
  cout<<"Binary : "<<b<<"\n";

   cout<<"Hexadecimal is :";

    while(temp2!=0)
    {
    int rem =  temp2% 16;
    temp2 /= 16;
    if (rem > 9)
        cout << (char)(rem - 10 + 'A');
    else
        cout << rem << endl;
    }
    cout<<"Octal is :";

  temp3 = num;
  while(temp3 !=0)
  {
    cout<<temp3%8;
    temp3/=8;

  }
}
