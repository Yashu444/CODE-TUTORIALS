#include <iostream>
using namespace std;

int main()
{
    int container[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(container) / sizeof(int);

    int maxarea = 0;
    int leftpointer = 0, rightpointer = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (container[leftpointer] > container[rightpointer])
        {
            rightpointer--;
        }
        if (container[leftpointer] < container[rightpointer])
        {
            leftpointer++;
        }
        int width = rightpointer - leftpointer;
        int height = min(container[leftpointer], container[rightpointer]);
        int currarea = width * height;
        maxarea = max(maxarea, currarea);
    }
    cout << maxarea;
}