#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    int n ;
    cout << "Enter the size of the array" << endl ;
    cin >> n ;
    int arr[n] ;
    cout << "Enter the elements of the array" << endl ;
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    int x = 0;
    cout << "Enter the item you want to search for" << endl ;
    cin >> x ;
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1)
    {
        cout << "Element is not present in array" << endl ;
    }
    cout << "Element is present at index " << result;
    return 0;
}
