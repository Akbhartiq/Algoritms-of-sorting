#include <bits/stdc++.h>
using namespace std;
void merge_sort(int *p, int size);
void merge(int *a, int *b, int m, int n, int *dest);
int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the content of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, n);
    // printing the sorted array
    cout << "The sorted Array is as follows: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    cout << endl;
    return 0;
}
void merge_sort(int *p, int size)
{
    int size1, size2;
    size1 = size / 2;
    size2 = size - size1;
    int *p1 = new int[size1];
    int *p2 = new int[size2];
    if (size > 1)
    {

        // Allocatting the content to the divided array
        for (int i = 0; i < size1; i++)
        {
            p1[i] = p[i];
        }

        for (int i = 0; i < size2; i++)
        {
            p2[i] = p[size1 + i];
        }

        merge_sort(p1, size1); // Calling merge sort again to divide the array to size of 1
        merge_sort(p2, size2);
        merge(p1, p2, size1, size2, p); // Callin merge to merge the two sorted array
    }
    return;
}
void merge(int *a, int *b, int m, int n, int *dest)
{
    int index = 0;
    int i = 0, j = 0;
    while ((index != m + n) && (i != m) && (j != n))
    {
        if (a[i] <= b[j])
        {
            dest[index++] = a[i++];
        }
        else if (a[i] > b[j])
        {
            dest[index++] = b[j++];
        }
    }
    if (i == m)
    {

        for (; j < n;)
        {
            dest[index++] = b[j++];
        }
    }
    else if (j == n)
    {

        for (; i < m;)
        {
            dest[index++] = a[i++];
        }
    }
}
