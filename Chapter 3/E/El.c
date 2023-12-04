//E(l). When interest compounds q times per year at an annual rate of 
//r % for n years, the principle p compounds to an amount a as per 
//the following formula 
//a = p ( 1 + r / q ) nq
//Write a program to read 10 sets of p, r, n & q and calculate 
//the corresnding as.

#include<stdio.h>

int main() {
  float p, r, n, q; 
  double amount = 0, exp;
  int i = 0, j = 0;
  while(i < 10) {
    scanf("%f%f%f%f", &p, &r, &n, &q);
    j = 0; 
    exp = 1 + r/q;
    while(j < n*q) {
      exp *= exp;
      j++;
    }
    amount = p * exp;
    printf("amount = %lf\n", amount);
    i++;
  }

  return 0;
}
