#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int container[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(container) / sizeof(int);
    int maxHeight = container[0];
    int minDivision = INT_MAX;
    int height_value;
    int height_address;
    int maxHeight_address;
    int max_Difference;

    for (int i = 1; i < n; i++)
    {
        if (maxHeight > container[i])
        {
            minDivision = min(minDivision, maxHeight - container[i]);
            height_value = container[i];
            height_address = i;
        }
        if (container[i] > maxHeight)
        {
            maxHeight = max(maxHeight, container[i]);
            maxHeight_address = i;
        }
    }
    max_Difference = height_address - maxHeight_address;
    if (max_Difference < 0)
    {
        max_Difference = -max_Difference;
    }
    cout << (max_Difference * height_value);
}