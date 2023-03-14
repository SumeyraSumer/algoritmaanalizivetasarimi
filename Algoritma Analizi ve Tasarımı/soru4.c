#include <stdio.h>
#include <stdlib.h>

 /*Binary Search
 Sümeyra Sümer
 5210505067*/

void print(int array[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n",array[i]);
	}
	printf("\n");
}
void swap(int array[],int inx1,int inx2){
	int a = array[inx1];
	array[inx1] = array[inx2];
	array[inx2] = a;
}
int sec(int array[],int p,int r){
	int x = p;
	int i;
	for(i= p;i < r;i++){
		if(array[i] < array[r]){
			swap(array, i, x);
			x++;
		}
	}
	swap(array, x, r);
	return x;
}
void quickSort(int array[], int p, int r){
	if(p >= r)
		return;
	int q = sec(array, p, r);
	quickSort(array,p,q - 1);
	quickSort(array, q + 1, r);
}

int main(int argc, char *argv[]) {
	
	
	int array[10000];
  	int i;
  for (i = 0; i < 10000; i++) {
    array[i] = rand();
  }
	int n = 10000;
	quickSort(array, 0, n -1);
	print(array,n);
	return 0;
}
