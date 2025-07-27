#include <iostream>
#include <limits.h>
using namespace std;

bool isPossible(int time[], int partition, int man, int maxTime)
{
    int painter = 1, time_alloted = 0;

    for (int i = 0; i < partition; i++)
    {
        if (time[i] > maxTime)
        {
            return false;
        }
        if (time_alloted + time[i] <= maxTime)
        {
            time_alloted += time[i];
        }
        else
        {
            painter++;
            time_alloted = time[i];
        }
    }
    return painter > man ? false : true;
}

int painterPartition(int time[], int partition, int man)
{
    if (man > partition)
    {
        return -1;
    }

    int sum = 0, maxValue = INT_MIN;
    for (int i = 0; i < partition; i++)
    {
        sum += time[i];
        maxValue = max(time[i], maxValue);
    }

    int st = maxValue, end = sum;
    int ans = -1;
    while (st <= end)
    {
        int maxTime = st + (end - st) / 2;
        if (isPossible(time, partition, man, maxTime))
        {
            ans = maxTime;
            end = maxTime - 1;
        }
        else
        {
            st = maxTime + 1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1, 2, 8, 4, 9};
    int n = 5, m = 3;

    cout << painterPartition(arr, n, m);
}