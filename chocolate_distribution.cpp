/*
Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum

Input 1:  [Packet having 7 Chocolates]

arr[] = [7, 3, 2, 4, 9, 12, 56]-- Array Of packets
m = 3 (Number of children)

Output 1:

Result: 2

Explanation: We pick the packets with 2, 3, 4 chocolates.

Input 2:

arr[] = [3, 4, 1, 9, 56, 7, 9, 12]

m = 5 (Number of children)

Output 2:

Result: 6

Explanation: We pick the packets with 3, 4, 7, 9, 9 chocolates.

Idea for the solution:

For the array: [7, 3, 2, 4, 9, 12, 56]

m = 3 (Number of children)

Consider every item as minimum one by one:

[7, 9, 12] → Difference: 5

[3, 4, 7] → Difference: 4

[2, 3, 4] → Difference: 2 (This is the minimum)

[4, 7, 9] → Difference: 5

[9, 12, 56] → Difference: 47


The minimum of all the values is 2.
*/

#include<iostream>
#include<algorithm>
using namespace std;
int distribution(int arr[],int n,int m)
{
    if(m>n)
    {
        return -1;
    }

    sort(arr,arr+n);

    int result = arr[m-1]-arr[0];

    for(int i=1;(i+m-1)<n;i++)
    {
        result = min(result, (arr[i+m-1]-arr[i]));
    }
    return result;
}
int main()
{
    int arr[]={7,3,1,8,9,12,56};

    int n = sizeof(arr)/sizeof(arr[0]);

    int m;
    cout<<"Enter the number of stdudent : ";
    cin>>m;
    int h = distribution(arr,n,m);

    cout<<h;
}
