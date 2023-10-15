//i) Matrix Multiplication
#include <iostream>
using namespace std;

int multiply(int a[100][100],int b[100][100],int r1,int r2,int c1,int c2)
{
    int mult[100][100], i, j, k;

    if (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";
    }
    // Initializing elements of matrix mult to 0.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }

    return 0;
}

//ii)Transpose of a matrix
#include <iostream>
using namespace std;

int transpose(int a[100][100],int r1,int c1)
{
    int trans[10][10], i, j, k;
    for (i=0;i<r1;i++)
        for (j=0;j<c1;i++)
        {
            trans[j][i]=a[i][j];
        }
    cout << "\nTranspose of Matrix: " << endl;
    for (int i = 0; i < c1; ++i)
    {
        for (int j = 0; j < r1; ++j)
        {
            cout << " " << trans[i][j];
        }
        cout<<"\n";
    }
}
//Computing (A.B)’ = B’. A’ 
#include <iostream>
using namespace std;

int main()
{
    int i, j, m1,m2, n1,n2, a[100][100],b[100][100];
    cout<<"enter no. of rows for a:";
    cin>>m1;
    cout<<"enter no. of columns for a:";
    cin>>n1;
    cout<<"\n enter elements\n";
for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
                cin>>a[i][j];
    }
    cout<<"\nenter no. of rows for a:";
    cin>>m2;
    cout<<"\nenter no. of columns for a:";
    cin>>n2;
    cout<<"\n enter elements\n";
for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
                cin>>b[i][j];
    }
}




