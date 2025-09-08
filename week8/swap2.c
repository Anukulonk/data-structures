#include <stdio.h>

int Swap(int *a, int *b, int *c){

int temp = *a;
*a = *b;
*b = *c;
*c = temp;
}

int main(){

int x, y, z;
printf("Input data x and y and z : ");
scanf("%d %d %d", &x, &y, &z);

//Before
printf("Before swap: x=%d, y=%d, z=%d\n", x, y, z); // ก่อน Swap

Swap(&x, &y, &z);

//After
printf("After swap: x=%d, y=%d, z=%d\n", x, y, z); // หลัง Swap

return 0;
}