#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int *a, int low, int high)
{
    int left, right, pivot_item;
    pivot_item = a[low];
    int pivot = left = low;
    right = high;
    while (left < right)
    {
        /* Move left while item < pivot */
        while (a[left] <= pivot_item)
            left++;
        /* Move right while item > pivot */
        while (a[right] > pivot_item)
            right--;
        if (left < right)
            swap(a[left], a[right]);
    }
    /* Right is final position for the pivot */
    a[low] = a[right];
    a[right] = pivot_item;
    return right;
}

void quicksort(int *a, int low, int high)
{
    int pivot;
    /* Termination condition! */
    if (high > low)
    {
        pivot = partition(a, low, high);
        quicksort(a, low, pivot - 1);
        quicksort(a, pivot + 1, high);
    }
}

int main()
{
    int arr[] = {5, 8, 1, 3, 7, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    quicksort(arr, 0, n - 1);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
