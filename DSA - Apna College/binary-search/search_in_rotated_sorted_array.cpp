#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int n = 6;
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            cout << mid;
            break;
        }

        // left side sorted
        if (arr[st] <= arr[mid])
        {
            if (target >= arr[st] && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }

        // right side sorted
        else
        {
            if (target >= arr[mid] && target <= arr[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}