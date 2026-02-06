#include <stdio.h>

int main() {
    int mark[5] = {19, 10, 8, 17, 9};

    // make the value of the third element to -1
    mark[2] = -1;

    // make the value of the fifth element to 0
    mark[4] = 0;

    // print the updated array
    for (int i = 0; i < 5; i++) {
        printf("%d ", mark[i]);
    }

    return 0;
}
