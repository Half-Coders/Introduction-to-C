/*
    Documentation Section
    Author : Habibur Rahman Zihad
    Date   : 01-01-2026
    Code   : Basic C Program
*/

// Linking / Preprocessor Section
#include <math.h>
#include <stdio.h>


// Definition Section
#define PI 3.1416
#define MAX 100

// Global Declaration Section
int n = 100;

int sum(int x, int y);

// Main Function Section
int main() {
  int a = 5;
  int b = 10;

  printf("Hello, C Programming!\n");

  printf("Sum = %d\n", sum(a, b));

  return 0;
}

// Sub-program / User-defined Function Section
int sum(int x, int y) { return x + y; }