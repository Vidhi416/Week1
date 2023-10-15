#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout<<"Enter a string :";
    char arr[100];
    cin>>arr;
    char *p = &arr[0];
    char var[100];
    for(int i = 0; i<strlen(arr)||var[i]!='\0';i++) 
    {
        var[i] = *(p+i);       
    }
    cout<<var;
    }

