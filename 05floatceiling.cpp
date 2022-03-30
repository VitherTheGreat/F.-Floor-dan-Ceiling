#include <cstdio>

int main() {
	float a; // Variable input
	int floor, ceiling; // Variable output
	
	scanf ("%f", &a); 
	
	if (a < 0) { // Negatif
		floor = a-1;
		ceiling = a;
		printf ("%d " "%d", floor, ceiling);
	} else if (a >= 0) { // Positif 
		floor = a;
		ceiling = a+1;
		printf ("%d " "%d", floor, ceiling);
	}
}
	
	