#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
int main()
    {
int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    char choice;
    cout << "Choose a sorting method:\n";
    cout << "b Bubble Sort\n";
    cout << "s Selection Sort\n";
    cin >> choice;

    switch (choice) {
        case 'b':
            bubbleSort(arr, n);
            cout << "Sorted using Bubble Sort:\n";
            break;
        case 's':
            selectionSort(arr, n);
            cout << "Sorted using Selection Sort:\n";
            break;
        default:
            cout << "Invalid choice.\n";
            return 1;
    }

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
cout<<"enter a number\n";
int a;
cin>>a;
int l=0,h=n-1,mid;
do
{
 mid=(l+h)/2;
 if(a<arr[mid])
 h=mid-1;
 else
 l=mid+1;
} while (a!=arr[mid] && l<=h);
if(a==arr[mid])
cout<<"element found at:"<<mid+1<<endl;
else
cout<<"elemnet not found";

    return 0;
}







