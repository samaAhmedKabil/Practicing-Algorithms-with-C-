#include <bits/stdc++.h>
using namespace std;

Selection_sort (int array[] , int size)
{
    for(int i=0 ; i<size-1; i++) {
        int mini = i ;
        for(int j = i+1; j<size; j++){
         if(array[j] < array[mini])
            mini = j;
            swap(array[i], array[mini]) ;
        }
    }

}
void display(int array[] , int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

int main()
{
    int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }

   cout << "Array before Sorting: ";
   display(arr, n);
   cout << "Array after Sorting: ";
   Selection_sort(arr, n);
   display(arr, n);
    return 0;
}
