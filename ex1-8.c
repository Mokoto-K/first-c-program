#include <stdio.h>

int main() {
    long nl, c;
    
    while (c = getchar() != EOF)
	++nl;
    printf("%ld\n", nl);
}

