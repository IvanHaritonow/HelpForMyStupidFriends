#include <stdio.h>

int main()
{
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Мне ");
    
      if ((age >= 6 && age <= 19) || (age % 100 >= 6 && age % 100 <= 19))
         printf("%d лет\n", age);
      else if (age % 10 == 1)
         printf("%d год\n", age);
      else if (age % 10 >= 2 && age % 10 <= 4)
         printf("%d года\n", age);   
      else printf("%d лет\n", age);

    return 0;
}
