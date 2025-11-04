
//Q52 (Nested Loops without Arrays/Strings)
//Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*



#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) { // total 5 blocks
        for (j = 1; j <= i; j++) { // print stars in each block
            printf("*\n");
        }
        printf("\n"); // blank line between blocks
    }

    return 0;
}
