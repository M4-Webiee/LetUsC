//E(k). A machine is purchased which will produce earning of Rs. 
//1000 per year while it lasts. The machine costs Rs. 6000 and 
//will have a salvage of Rs. 2000 when it is condemned. If 12 
//percent per annum can be earned on alternate investments 
//what would be the minimum life of the machine to make it a 
//more attractive investment compared to alternative 
//investment?

#include<stdio.h>

int main() {
  int m1Cost = 6000, m1Earning = 1000, m1Salvage = 2000;
  int rate = 12;
  int year = 0;
  float altEarn = 0, mEarn = -4000;
  while(altEarn >= mEarn) {
    altEarn += (6000+altEarn)/100*12;
    mEarn += 1000;
    year++;
    printf("year = %d\tmEarn = %.2f\taltearn = %.2f\n", year, mEarn, altEarn);
    if(year > 100) break;
  }
  printf("minimum life = %d\n", year);

  return 0;
}
