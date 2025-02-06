//Write a program to sort an array which consists of only 0, 1, and 2 without using sorting

#include<iostream>
#include<algorithm>
using namespace std;
void swapp(int arr[],int a,int b)
{
    int t=arr[a];
    arr[a]=arr[b];
    arr[b]=t;
    //return (arr[a],arr[b]);
}

void flag_algo(int arr[],int n)
{
    int low=0,hi=n-1,mid=0;

    while(mid<=hi)
    {
        if(arr[mid]==0)
        {
            swapp(arr,mid,low);
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swapp(arr,mid,hi);
            hi--;
        }
    }
}

int main()
{
    int arr[]={1,0,1,2,2,0,1,1,0,0,2,2,1,1,0};

    int n= sizeof(arr)/sizeof(arr[0]);

    flag_algo(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
