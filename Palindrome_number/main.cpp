#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x)
{
    string s = to_string(x);

    int j = s.length() - 1;

    for (int i = 0; i <= j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int x = 121;

    cout << isPalindrome(x) << endl;

    return 0;
}