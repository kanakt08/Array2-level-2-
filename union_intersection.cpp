//Write a program to find the union and intersection of two sorted arrays

#include<iostream>
#include<algorithm>
using namespace std;
void union_array(int arr1[],int n,int arr2[],int m)
{
    int i=0,j=0;
    if(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else  if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n)
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<m)
    {
        cout<<arr2[j]<<" ";
        j++;
    }
}
void intersection(int arr1[],int n,int arr2[],int m)
{
    int i=0,j=0;
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    int arr1[]= {10,23,56,2,45,90};
    int arr2[]={12,10,13,45};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    cout<<"union of array : ";
    union_array(arr1,n,arr2,m);
    cout<<endl<<endl;

    cout<<"intersection of array : ";
    intersection(arr1,n,arr2,m);
    cout<<endl;
}
