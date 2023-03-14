#include <stdio.h>
#include <stdlib.h>

/*BruteForce
	Sümeyra Sümer
	5210505067*/


int main(int argc, char *argv[]) {
	
	int array[10000];
  	int i;
  for (i = 0; i < 10000; i++) {
    array[i] = rand();
  }
    int n = sizeof(array) / sizeof(array[0]); 
    int maximum = array[0]; 
	int s;
    for (s = 1; s < n; s++) { 
        if (array[s] > maximum) {
            maximum = array[s];
        }
    }

    printf("Dizideki en buyuk deger: %d", maximum); 
	
	
	
	
	return 0;
}
