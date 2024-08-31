#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int start = 0,end = s.length() - 1;

    while (start < end) {
        if (s[start] != s[end]) {
            return false;  // Not a palindrome if characters don't match
        }
        start++;
        end--;
    }
    return true;  // All characters matched, so it's a palindrome
}

int main() {
    string str = "madam";  // Predefined string

    if (isPalindrome(str)) {
        cout <<str <<is a palindrome" << endl;
    } else {
        cout<< str <<is not a palindrome" << endl;
    }

    return 0;
}

