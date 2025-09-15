#include <stdio.h>
#include <stdlib.h>

void swap_int(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_desc(int *begin, int *end) {
    for (int *i = begin; i <= end; ++i) {
        int *maxptr = i;
        for (int *j = i + 1; j <= end; ++j) {
            if (*j > *maxptr) {
                maxptr = j;
            }
        }
        if (maxptr != i) {
            swap_int(i, maxptr);
        }
    }
}

void stats(const int *a, int n, double *avg, int *maxv) {
    const int *p = a;
    const int *endp = a + n;
    long long sum = 0;

    *maxv = *p;

    for (; p < endp; ++p) {
        sum += *p;
        if (*p > *maxv) {
            *maxv = *p;
        }
    }

    *avg = (double)sum / n;
}

int main(void) {
    int N;
    printf("ป้อนตัวเลขจำนวนเต็ม : ");
    if (scanf("%d", &N) != 1) return 0;
    if (N < 2 || N > 100) {
        fprintf(stderr, "N ต้องเป็นจำนวนระหว่าง 2 ถึง 100\n");
        return 0;
    }

    int *arr = malloc(N * sizeof(int));
    if (!arr) {
        fprintf(stderr, "สร้างหน่วยความจำไม่สำเร็จ\n");
        return 0;
    }

    for (int i = 0; i < N; ++i) {
        scanf("%d", arr + i);
    }

    sort_desc(arr, arr + N - 1);

    double average;
    int maxv;
    stats(arr, N, &average, &maxv);

    for (int i = 0; i < N; ++i) {
        if (i) printf(" ");
        printf("%d", *(arr + i));
    }
    printf("\n");
    printf("%.2f\n", average);
    printf("%d\n", maxv);

    free(arr);
    return 0;
}
