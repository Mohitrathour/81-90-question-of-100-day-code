//Q86: Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end;
    int isPalindrome = 1; 
    scanf("%s", str);
    int len = strlen(str);
    
    start = 0;
    end = len - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;            
        }
        start++;
        end--;
    }
    if (isPalindrome) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}