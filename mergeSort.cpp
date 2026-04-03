 #include<iostream>
#include<ctime>  
using namespace std;

int b[50];

void merge(int a[], int lb, int mid, int ub) {
    int i = lb;
    int j = mid + 1;
    int k = lb;

    while (i <= mid && j <= ub) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
            k++;
        } else {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    if (i > mid) {
        while (j <= ub) {
            b[k] = a[j];
            j++;
            k++;     
        }
    } else {
        while (i <= mid) {
            b[k] = a[i];
            i++;
            k++;
        }
    }

    for (k = lb; k <= ub; k++) {
        a[k] = b[k];
    }
}

void mergesort(int a[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        mergesort(a, lb, mid);
        mergesort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}

int main() {
    int n;
    int a[50];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    mergesort(a,0,n-1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
