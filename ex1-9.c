#include <stdio.h>

int main() {
    
    int c;

    c = getchar();
    while (c != EOF) {
	if (c != ' ') {
            putchar(c);
	}
	else if (c == ' ') {
	    putchar(' ');
	    while (c == ' ') {
		    c = getchar();
	    }
	    putchar(c);
	}
	c = getchar();
    }
}

