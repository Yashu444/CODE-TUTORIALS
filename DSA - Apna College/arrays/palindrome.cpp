#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int realNum = num;
    int palindromeNum = 0, remainder;

    while (num > 0)
    {
        remainder = num % 10;
        palindromeNum = palindromeNum * 10 + remainder;
        num /= 10;
    }
    if (palindromeNum == realNum)
    {
        cout << "Given num is a palindrome number";
    }
    else
    {
        cout << "it is not a palindrome number";
    }
}