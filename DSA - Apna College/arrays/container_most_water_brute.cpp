#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int container[] = {1, 1};
    int n = sizeof(container) / sizeof(int);
    int maxWater = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int width = j-i;
            int height = min(container[i], container[j]);
            int area = width *height;
            maxWater = max(maxWater, area);
        }
    }
    cout << maxWater;
}
