#include <iostream>
using namespace std;

int main()
{
    int binary = 111;
    int ans = 0, pow = 1, rem;

    while (binary > 0)
    {
        rem = binary % 10;
        binary /= 10;
        ans += (rem * pow);
        pow *= 2;
    }
    cout << ans;
}