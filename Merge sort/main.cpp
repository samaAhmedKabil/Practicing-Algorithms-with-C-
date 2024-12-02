#include <iostream>

using namespace std;

void mergeSort(int arr[] , int left , int right ,int mid)
{
    int leftSize=mid-left+1;
    int rightSize=right-mid;
    int* leftArr=new int[leftSize];
    int* rightArr=new int[rightSize];
    for(int i=0;i<leftSize;i++)
    {
        leftArr[i]=arr[left+i];
    }
    for(int i=0;i<rightSize;i++)
    {
        rightArr[i]=arr[mid+1+i];
    }
    int i=0 , j=0 , k=left ;
    while(i<leftSize && j<rightSize)
    {
        if(leftArr[i]<rightArr[j])
        {
            arr[k]=leftArr[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=rightArr[j];
            j++;
            k++;
        }
    }
    while(i<leftSize)
    {
        arr[k]=leftArr[i];
        i++;
        k++;
    }
     while(j<rightSize)
     {
         arr[k]=rightArr[j];
         j++;
         k++;
     }
}

void mergeAlg(int arr[],int left,int right)
{
    if(left>=right)
        return;
    int mid =(right + left)/2;
    mergeAlg(arr,left,mid);
    mergeAlg(arr,mid+1,right);
    mergeSort(arr,left,right,mid);
}

int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
            cin>>arr[i];
    }
    mergeAlg(arr,0,4);
    for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
    }
    return 0;
}
