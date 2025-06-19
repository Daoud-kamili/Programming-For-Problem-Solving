#include <stdio.h>
int main() {
    FILE *src = fopen("input.txt", "r");
    FILE *dest = fopen("copy.txt", "w");
    char c;
    while ((c = fgetc(src)) != EOF) {
        fputc(c, dest);
    }
    fclose(src);
    fclose(dest);
    return 0;
}