#include <stdio.h>

int main(void)
{
    char alphabet = 'a';
    int i;

    for (i = 0; i < 26; i++) {
        if (alphabet != 'q' && alphabet != 'e') {
            putchar(alphabet);
        }
        alphabet++;
    }

    putchar('\n');

    return 0;
}
