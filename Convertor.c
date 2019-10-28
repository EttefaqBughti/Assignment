#include <stdio.h>
int main()
{
  int choice = 0;
  printf("Enter volume");
  float volume = 0;
  scanf("%f", &volume);
  printf("1.Gallon To Litter\n");
  printf("2.Litter to Gallon\n");
  scanf("%d", &choice);
  if(choice == 1)
  {
      printf("\n%.1f Gallon is %2.f litters\n,",volume, volume * 3.785);

  }
  else if(choice == 2)
  {
      printf("\n%.2f litters is %.2f Gallon\n,",volume, volume / 0.264);
  }
  else
  {
      printf("data out of range");
  }
    return 0;
}
