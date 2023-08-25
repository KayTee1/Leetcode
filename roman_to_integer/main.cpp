#include <iostream>
using namespace std;

int romanToInt(string s)
{
    char symbols[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int values[7] = {1, 5, 10, 50, 100, 500, 1000};

    int sLength = s.length();
    int answer{}, prevValue{};

    for (int i = sLength - 1; i >= 0; i--)
    {
        for (int j = 0; j < 7; j++)
        {
            if (s[i] == symbols[j])
            {
                if (values[j] < prevValue)
                {
                    answer -= values[j];
                }
                else
                {
                    answer += values[j];
                }
                prevValue = values[j];
            }
        }
    }

    return answer;
}

int main()
{

    string s = "MCMXCIV";

    cout << romanToInt(s) << endl;

    return 0;
}
