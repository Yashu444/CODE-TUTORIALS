#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int n = 10;

    int mid = 0, high = n - 1, low = 0;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }

        else
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }

    for(int i=0 ; i<n; i++){
        cout<< arr[i] <<" ";
    }
}