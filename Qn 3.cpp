#include <iostream>
using namespace std;

int main()
{
    int a[10][10], r1, c1, i, j, pos1,pos2;
    cout << "Enter rows and columns for matrix: ";
    cin >> r1 >> c1;
   // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            if (a[i][j]==0)
            {
            pos1=i;
            pos2=j;
            for (i=0;i<c1;i++)
                a[pos1][i]=0;
            for (j=0;j<r1;j++)
                a[j][pos2]=0;
            }

        }
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c1; ++j)
        {
            cout<<a[i][j];
            cout<<"\t";
        }  
        cout<<"\n";
    }
    return 0;
}