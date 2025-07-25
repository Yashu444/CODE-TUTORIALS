#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int n = 9;
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
        {
            cout << mid;
            break;
        }

        // even case
        else if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid - 1])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }

        // odd case
        else if (mid % 2 != 0)
        {
            if (arr[mid] == arr[mid - 1])
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