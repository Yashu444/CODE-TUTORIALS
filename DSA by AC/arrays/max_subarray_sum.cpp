#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int currsum;
    int maxsum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        currsum = 0;
        for (int end = st; end < n; end++)
        {
            currsum += arr[end];
            maxsum = max(currsum, maxsum);
        }
    }
    cout << maxsum;
}