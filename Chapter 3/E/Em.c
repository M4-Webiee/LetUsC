//E(m)The natural logarithm can be approximated by the following 
//series. 
//If x is input through the keyboard, write a program to 
//calculate the sum of first seven terms of this series.

#include<stdio.h>

int main() {
  float x; 
  scanf("%f", &x);
  float exp, nlog = (x-1)/x;
  exp = nlog;

  int i = 2;
  while(i < 8) {
    nlog += exp*exp/2;
    i++;
  }
  printf("natural log of first terms = %f\n", nlog);

  return 0;
}
