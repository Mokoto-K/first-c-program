#include <stdio.h>

int main() {
    int c;
         
    c = getchar();
    while (c != EOF) {
	if (c == '	') {
	    putchar('\\');
	    putchar('t');
	}
	else if (c == '\b') {

	    putchar('\\');
	    putchar('b');
	}
	else if (c == '\\') {

	    putchar('\\');
	    putchar('\\');
	}
	else {
	    putchar(c);
	}
	c = getchar();
    }
}

