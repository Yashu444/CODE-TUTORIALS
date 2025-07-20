#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 7, 11, 15}, ans;
    int n = nums.size();
    int target = 18;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    cout << ans[0] << ", " << ans[1];
}