//Program to display 'Hello' when user enters 1, 'Bonjour' when user enters 2, 'Ciao' when user enters 3. 

#include <stdio.h>
int main() {
   
   int x;
   printf("Enter 1 for Salaam, 2 for Aadaab, 3 for Hello: ");
   scanf("%d", &x);

   switch (x)
   {
   case 1:
    printf("Salaam\n");
    break;

    case 2:
    printf("Aadaab\n");
    break;

    case 3:
    printf("Hello\n");
    break;
   
   default:
    printf("Incorrect option\n");
    break;
   }

   return 0;
}