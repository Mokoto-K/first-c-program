#include <stdio.h>

int main() {
    int c;
    int letters;
    int words[10];
    letters = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            ++letters;
        }

    }
    printf("%d\n", letters);
}
            
