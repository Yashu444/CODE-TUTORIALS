#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {'a', 'b', 'c', 'd'};
    for (char val : vec)
    {
        cout << val << endl;
    }
    cout<< vec.size();
}