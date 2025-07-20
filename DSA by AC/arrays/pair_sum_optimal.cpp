#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {11, 2, 7, 15};
    sort(nums.begin(), nums.end());
    vector<int> ans;
    int n = nums.size();
    int target = 9;
    int i = 0, j = n - 1;

    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    cout << ans[0] << ", " << ans[1];
}