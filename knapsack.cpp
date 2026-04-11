#include <iostream>
using namespace std;

struct item
{
    int wt;
    int profit;
};

void merge(item arr[], int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    item b[100];

    while (i <= mid && j <= ub)
    {

        double x = ((double)arr[i].profit / arr[i].wt);
        double y = ((double)arr[j].profit / arr[j].wt);

        if (x > y)
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    for (k = lb; k < ub; k++)
    {
     arr[k]=b[k];
    }
}

void mergesort(item arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}
double knapsack(item arr[], int w, int n)
{
    mergesort(arr, 0, n - 1);
    double total_profit = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].wt <= w)
        {
            total_profit += arr[i].profit;
            w -= arr[i].wt;
        }
        else
        {
            total_profit += arr[i].profit * ((double)w / arr[i].wt);
            break;
        }
    }
    return total_profit;
}
int main()
{

    int n, w;
    cout << " enter no. of items: ";
    cin >> n;
    item arr[100];
    cout << "enter profit and weight for each item" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "item " << i + 1 << ": ";
        cout << "profit";
        cin >> arr[i].profit;
        cout << "weight ";
        cin >> arr[i].wt;
    }
    cout << " max capacity of knapsack : ";
    cin >> w;

    double max_profit = knapsack(arr, w, n);

    cout << " max profit: " << max_profit;
}