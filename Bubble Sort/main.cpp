#include<iostream>
using namespace std;

Bubble_Sort (int arr[] , int sz)
{
    int temp ;
    for(int i=0; i<sz-1 ; i++)
    {
        for(int j=0; j<(sz-1-i); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int sz ;
    cout<<"Enter the Size :- " ;
    cin>>sz;
    int arr[sz] ;
    cout<<"Enter the Numbers: ";
    for(int i=0; i<sz ; i++){
        cin>>arr[i];
    }
    Bubble_Sort (arr , sz) ;
    cout<<"\nThe New Array is: \n";
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
