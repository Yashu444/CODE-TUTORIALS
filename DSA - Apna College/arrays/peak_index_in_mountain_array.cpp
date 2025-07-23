#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {0, 3, 8, 9, 5, 2};
    int n = 6;
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            cout << mid;
            break;
        }

        else if(arr[mid - 1] < arr[mid]){
            st = mid +1;
        }

        else if(arr[mid] > arr[mid+1]){
            end = mid -1;
        }
    }
    return -1;
}