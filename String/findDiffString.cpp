#include <iostream>
#include <string>
using namespace std;

char findTheDifference(string s, string t) {
    char se;
    int freq[26] = {0};

    for(size_t i = 0; i < t.size(); i++){
        freq[t[i] - 'a']++;
    }

    for(size_t i = 0; i < s.size(); i++){
        freq[s[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] == 1){
            se = 'a' + i;
        }
    }

    return se;
}

int main() {
    string s = "abcd";
    string t = "abcde";

    cout << findTheDifference(s, t);

    return 0;
}