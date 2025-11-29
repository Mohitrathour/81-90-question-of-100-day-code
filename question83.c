#include <stdio.h>

int main() {
    char str[100];
    int i;
    int vowels = 0, consonants = 0;
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++) {
        
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }
    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}