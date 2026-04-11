    #include <iostream>
    using namespace std;

    struct activity{
        int start,finish;
    };
   
    void merge(activity arr[], int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    activity b[100];

    while (i <= mid && j <= ub)
    {
        if( arr[i].finish<=arr[j].finish)
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
    for (k = lb; k <= ub; k++)
    {
     arr[k]=b[k];
    }
}
void mergesort(activity arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

void activityselection(activity arr[],int n)
{
    mergesort(arr,0,n-1);

    cout<<" selected activities: ";
    int i=0; //prev selected

    cout<<"("<<arr[i].start<<","<<arr[i].finish<<")";

    for(int j=1;j<n;j++) // first act already selected, so j=1
    {
        if(arr[j].start>=arr[i].finish)
        {
           cout<<"("<<arr[j].start<<","<<arr[j].finish<<")";
           i=j;
        }
    }
}

int main()
{
    int n;
    cout<<"enter no. of activies: ";
     cin>>n;
    activity arr[n];
    for(int i=0;i<n;i++)
{
    cout<<"enter start and finish time: "<<endl;
    cin>>arr[i].start>>arr[i].finish;
}
activityselection(arr,n);
}