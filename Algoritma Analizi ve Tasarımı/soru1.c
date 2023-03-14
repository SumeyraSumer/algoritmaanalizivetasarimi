#include <stdio.h>
#include <stdlib.h>

 /*Binary Search
 Sümeyra Sümer
 5210505067*/

int find(int array[], int left, int right) {
    if (left == right) {
        return array[left];
    }
    int ort = left + (right - left) / 2;
    int leftmax = find(array, left, ort);
    int rightmax = find(array, ort + 1, right);
    return (leftmax > rightmax) ? leftmax : rightmax;
}

int main(int argc, char *argv[]) {
	
	int array[10000];
  	int i;
  for (i = 0; i < 10000; i++) {
    array[i] = rand();
  }
    int n = sizeof(array) / sizeof(array[0]);
    int max = find(array, 0, n - 1);
    printf("En buyuk deger: %d\n", max);
	
	
	
	return 0;
}
