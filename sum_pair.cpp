//Write a program to find all pairs in an array whose sum is equal to a given number

#include<iostream>
#include<algorithm>
using namespace std;

void pair_sum(int arr[],int n,int target)
{
    int left=0,right=n-1,flag=0;
    sort(arr,arr+n);
    while(left<right)
    {
        int sum = arr[left]+arr[right];
        if(sum<target)
        {
            left++;
        }
        else if (sum>target)
        {
            right--;
        }
        else
        {
            cout<<"("<<arr[left]<<","<<arr[right]<<")"<<endl;
            flag=1;
            left++;
            right--;
        }
    }
    if(flag==0)
    {
        cout<<"No pair doesn't exist "<<endl;
    }
}
int main()
{
    int arr[]={7,8,10,12,17,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"enter the target sum : ";
    cin>>target;

    pair_sum(arr,n,target);
}
