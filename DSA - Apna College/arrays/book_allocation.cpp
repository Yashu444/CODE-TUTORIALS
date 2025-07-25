#include <iostream>
#include <limits.h>
using namespace std;

// if assigned pages is valid or not
bool isValid(int arr[], int n, int m, int maxAllowedPages)
{
    int student = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }

        // new assigned pages is less than maxpages
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }

        // exceed to assigning pages so need new students
        else
        {
            student++;
            pages = arr[i];
        }
    }
    // if our assigned stduent is greater than given student so false
    return student > m ? false : true;
}

int main()
{

    int arr[] = {2, 1, 3, 4};
    int n = 4, m = 2;
    int sum = 0, maxValue = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxValue = max(arr[i], maxValue);
    }

    int st = maxValue, end = sum; // range of our pages
    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        // if valid so finding minimum possible solution
        // left
        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }

        // right
        else
        {
            st = mid + 1;
        }
    }

    cout << ans;
}