#include <bits/stdc++.h>
using namespace std;


void permute(int arr[], int l, int r)
{
    static int count = 1;
    if(l == r)
    {
        cout << count++ <<" : ";
        for(int j = 0; j <= r; j++)
        {
            cout << arr[j] <<" ";
        }
        cout << endl;
    }
    else
    {
        for(int i = l; i <= r; i++)
        {
            int temp = arr[l];
            arr[l] = arr[i];
            arr[i] = temp;
            permute(arr, l + 1, r);
            temp = arr[l];
            arr[l] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    permute(arr, 0, n - 1);
    cout << endl;
    return 0;
}