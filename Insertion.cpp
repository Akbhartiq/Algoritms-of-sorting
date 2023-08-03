#include <bits/stdc++.h>
using namespace std;
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
    // Performing the Insertion sort
    for (int i = 1; i < n; i++)
    {
        int k = i;
        int j = k - 1;
        while (j >= 0 && arr[k] < arr[j])
        {
            int swap = arr[k];
            arr[k] = arr[j];
            arr[j] = swap;
            j--;
            k--;
        }
    }
    // Printing the Sorted Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    cout << endl;
    return 0;
}
