#include <iostream>
using namespace std;

int lengthOfLongestSubstring(string s) {
        int answer = 0;
    int str_length = s.length();

    for (int i = 0; i < str_length; i++) {
        int seen[128] = {0};
        int j = i;

        while (j < str_length && seen[s[j]] == 0) {
            seen[s[j]] = 1;
            j++;
        }

        answer = max(answer, j - i);
    }

    return answer;
    }

int main(){

    string s = "abcabcbb";

    cout << lengthOfLongestSubstring(s) << endl;
}