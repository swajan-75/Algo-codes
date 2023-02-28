#include <bits/stdc++.h>
using namespace std;

void Merge(int l[], int nL, int r[], int nR, int arr[], int arrSize) {
    int i, j, k;
    i = j = k = 0;

    while (i < nL && j < nR) {
        if (l[i] <= r[j]) {
            arr[k] = l[i];
            i++;
        } else {
            arr[k] = r[j];
            j++;
        }
        k++;
    }

   while (i < nL) {
        arr[k] = l[i];
        i++;
        k++;
    }

    while (j < nR) {
        arr[k] = r[j];
        j++;
        k++;
    }
    
}

int  MergeSort(int arr[], int size) {
    int count = 0 ;
    if (size < 2) {
        return count;
    }

    int mid = size / 2;
    int l[mid];
    int r[size - mid];

    for (int i = 0; i < mid; i++) {
        l[i] = arr[i];
    }

    for (int i = mid; i < size; i++) {
        r[i - mid] = arr[i];
    }
    count++ ;
    count = count+MergeSort(l, mid);
    count = count+ MergeSort(r, size - mid);
    Merge(l, mid, r, size - mid, arr, size);
    return count ;
}

int main() {
    int arr[] = {4, 2, 6, 7, 1 , 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count = MergeSort(arr, size);
    cout<<"break down : "<<count<<endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

}
