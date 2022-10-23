#include <stdio.h>

void printHello(int);

int main(int arg, char** argv) {
    int i = 5;
    while (i > 0) {
        puts("Hello, while world!");
        i--;
    }

    for (int i = 5; i >0 ; i--) {
        puts("Hello, for world!");
    }

    printHello(10);

    return 0;
}

void printHello(int n) {
    while (n > 0) {
        puts("Hello, function world!");
        n--;
    }
}