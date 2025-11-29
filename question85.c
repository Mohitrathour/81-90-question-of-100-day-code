#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j, len;
    scanf("%s", str);
    len = 0;
    while (str[len] != '\0') {
        len++;
    }
    i = 0;          
    j = len - 1;    

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("%s", str);

    return 0;
}