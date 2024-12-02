#include <bits/stdc++.h>

using namespace std;

Insertion_Sort (int arr[] , int sz)
{
    int temp , j ;
    for (int i=1 ; i<sz ; i++)
    {
        temp = arr[i] ;
        j = i-1 ;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j] ;
            j-- ;
        }
        arr[j+1] = temp ;
    }
}

void Display (int arr[], int sz)
{
    for (int i=0 ; i<sz ; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int sz ;
    cout << "Enter the size of the array :- " ;
    cin >> sz ;
    int arr[sz] ;
    for (int i=0 ; i<sz ; i++)
    {
        cin >> arr[i] ;
    }
    Insertion_Sort(arr , sz) ;
    Display(arr , sz) ;
    return 0;
}
