#include <stdio.h>

int main() {
    char str[100];
    char target;
    int i, count = 0;
    scanf("%s", str);
    scanf(" %c", &target);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}