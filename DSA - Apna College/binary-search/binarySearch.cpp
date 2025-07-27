#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;
    int n = 7;
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + ((end - st) / 2);
        if (arr[mid] < target)
        {
            st = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] == target)
        {
            cout << mid;
            break;
        }
    }
    return -1;
}