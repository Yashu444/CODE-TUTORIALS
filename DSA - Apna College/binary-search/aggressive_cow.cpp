#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid)
{
    int lastposition = arr[0], cow = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastposition >= mid) /* mid is least distance so we cannot place lower than mid dist.
                                         or mid is the minAllowedDistance */
        {
            cow++;
            lastposition = arr[i];
        }
    }
    return cow >= m;
}

int main()
{
    int arr[] = {4, 2, 1, 8, 9};
    int n = 5, m = 3;
    sort(arr, arr + n);
    int maxValue = INT_MIN, minValue = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxValue = max(maxValue, arr[i]);
        minValue = min(minValue, arr[i]);
    }
    int st = 1, end = maxValue - minValue;

    if (m == 2)
    {
        cout << end;
        return 0;
    }

    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            st = mid + 1; /* for this we find maximum space so aggressive cow dont fight
                               so if answer possible we find maximum answer */
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << ans;
}