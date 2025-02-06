//Write a program to find common elements in 3 sorted arrays

//Approach: Using Three Pointers

#include <iostream>
using namespace std;

void findCommonElements(int arr1[], int n1, int arr2[], int n2, int arr3[], int n3)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        // If all three elements are equal, print it and move all pointers

        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
            k++;
        }

        // Move the pointer pointing to the smallest element
        else if (arr1[i] < arr2[j]) {
            i++;
        }

        else if (arr2[j] < arr3[k]) {
            j++;
        }

        else {
            k++;
        }
    }

    cout << endl;
}

int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80};

    int arr2[] = {6, 7, 20, 80, 100};

    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};


    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int n3 = sizeof(arr3) / sizeof(arr3[0]);


    findCommonElements(arr1, n1, arr2, n2, arr3, n3);


    return 0;

}
