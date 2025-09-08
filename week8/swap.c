#include <stdio.h>

int Swap(int *a, int *b){

int temp = *a;
*a = *b;
*b = temp;


}

int main(){

int x = 5, y = 10;
//Before
printf("Before swap: x=%d, y=%d\n", x, y); // ก่อน Swap

Swap(&x, &y);

//After
printf("After swap: x=%d, y=%d\n", x, y); // หลัง Swap

return 0;
}