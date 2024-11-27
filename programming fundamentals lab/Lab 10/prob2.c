#include <stdio.h>
#include <string.h>
void revstr(char str[], int s, int l);
void revstr(char str[], int s, int l) {
    if (s >= l) return;
    char temp = str[s];
    str[s] = str[l];
    str[l] = temp;
    revstr(str, s + 1, l - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    int len = strlen(str);
    revstr(str, 0, len - 1);
    printf("Reversed string: %s\n", str);
    return 0;
}
