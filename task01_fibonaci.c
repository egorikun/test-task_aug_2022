#include <stdio.h>

void Fibonaci (void);

int main() {
    Fibonaci();
    return 0;
}

void Fibonaci (void) {
    int fibonaci_length = 0;
    printf("Input Fibonaci array's length here:\n");
    scanf("%d", &fibonaci_length);
    int fibonaci_arr [fibonaci_length];
    fibonaci_arr[0] = 0;
    fibonaci_arr[1] = 1;
    for (int i = 2; i < fibonaci_length; i++) {
        fibonaci_arr[i] = fibonaci_arr[i - 1] + fibonaci_arr[i - 2];
    }
    for(int j = 0; j < fibonaci_length; j++) {
        if (j < fibonaci_length - 1) {
            printf("%d ", fibonaci_arr[j]);
        } else {
            printf("%d", fibonaci_arr[j]);
        }
    }
}
