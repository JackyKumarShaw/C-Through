#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{
   char text[100];
   int begin, middle, end, length = 0;
   clrscr();
   printf("Enter");


   gets(text);

   while (text[length] != '\0')
      length++;

   end = length - 1;
   middle = length/2;

   for (begin = 0; begin < middle; begin++)
   {
      if (text[begin] != text[end])
      {
	 printf("Not a palindrome.\n");
	 break;
      }
      end--;
   }
   if (begin == middle)
      printf("Palindrome.\n");
   getch();
   return 0;

}