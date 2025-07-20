#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, -10};
    int n = 6;
    int min = INT_MAX, max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << min << endl ;
    cout << max;
}