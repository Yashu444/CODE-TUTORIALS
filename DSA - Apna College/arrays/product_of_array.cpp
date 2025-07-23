#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int product;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        product = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                product *= arr[j];
            }
        }
        ans.push_back(product);
    }
    for (int k = 0; k < n; k++)
    {
        cout << ans[k] << ", ";
    }
}