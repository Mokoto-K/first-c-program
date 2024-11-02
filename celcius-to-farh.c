#include <stdio.h>

main() {
	printf("%6s %3s\n", "Cel", "Farh");
	
	float cel, farh;
	int upper,  step;
        
        cel = 0;
	farh = 32;
	step = 10;
        upper = 100;
	
	while (cel <= upper) {
	    farh = cel * (9.0 / 5.0) + 32;
	    printf("%6.1f %3.0f\n", cel, farh);
	    cel = cel + step;
	}
}
