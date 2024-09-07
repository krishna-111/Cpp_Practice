#include<iostream>
using namespace std;

void merge(int *arr, int i, int mid, int j) {
    int n1 = mid - i + 1;
    int n2 = j - mid;

    int arr1[n1];
    int arr2[n2];

    for(int k = 0; k < n1; k++) {
        arr1[k] = arr[i + k];
    }

    for(int k = 0; k < n2; k++) {
        arr2[k] = arr[mid + 1 + k];
    }

    int l = 0, m = 0, k = i;

    while(l < n1 && m < n2) {
        if(arr1[l] <= arr2[m]) {
            arr[k++] = arr1[l++];
        } else {
            arr[k++] = arr2[m++];
        }
    }

    while(l < n1) {
        arr[k++] = arr1[l++];
    }

    while(m < n2) {
        arr[k++] = arr2[m++];
    }
}

void mergesort(int *arr, int i, int j) {
    if(i < j) {
        int mid = i + (j - i) / 2;
        mergesort(arr, i, mid);
        mergesort(arr, mid + 1, j);
        merge(arr, i, mid, j);
    }
}

int main() {
    cout << "Enter the number of elements you want in the array: " << endl;
    int n;
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1);
    cout << "After sorting: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
