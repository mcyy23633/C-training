#include <stdio.h>
#include <string.h>

void flip(char*);
void classifyDigits(char*, char*, char*);

int main() {
    char str[80];
    char digits[80];
    char nonDigits[80];

    printf("块﹃:");
    fgets(str, sizeof(str), stdin);

    // 埃传︽才腹
    str[strcspn(str, "\n")] = '\0';

    // だ摸计㎝獶计
    classifyDigits(str, digits, nonDigits);

    // は锣﹃
    flip(digits);
    flip(nonDigits);

    printf("计场だ: %s\n", digits);
    printf("獶计场だ: %s\n", nonDigits);

    return 0;
}

void flip(char* s) {
    char d[80];
    int i, len;
    char *p;

    len = strlen(s);
    p = d + len - 1;

    for (i = 0; i < len; i++)
        *(p - i) = *(s + i);

    d[len] = '\0';
    strcpy(s, d);
}

void classifyDigits(char* s, char* digits, char* nonDigits) {
    int i, j = 0, k = 0;
    int len = strlen(s);

    for (i = 0; i < len; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            digits[j] = s[i];
            j++;
        } else {
            nonDigits[k] = s[i];
            k++;
        }
    }

    digits[j] = '\0';
    nonDigits[k] = '\0';
}

