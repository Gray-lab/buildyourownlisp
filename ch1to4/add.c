#include <stdio.h>

typedef struct {
    float x;
    float y;
} point;

int add_together(int, int);

int main(void) {
    int added = add_together(5, 6);
    printf("%d\n", added);
}

int add_together(int x, int y) {
    int result = x + y;
    return result;
}