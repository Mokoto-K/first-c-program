#include <stdio.h>

int main () {
	int c, nl, nb, nt;

	nl = 0;
	nb = 0;
	nt = 0;

	while ((c = getchar()) != EOF ) {

            if (c == ' ') {
		++nb;
	    }

	    if (c == '\t') {
    		++nt;
	    }

	    if (c == '\n') {
		++nl;
	    }
	}
	printf("Total lines: %d\nTotal tabs: %d\nTotal spaces: %d\n", nl, nt, nb);
}

