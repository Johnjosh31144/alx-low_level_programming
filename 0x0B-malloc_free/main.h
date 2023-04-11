int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

======== 0 - main.c===========

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* simple_print_buffer - prints buffer in hexa
* @buffer: the address of memory to print
* @size: the size of the memory to print
*
* Return: Nothing.
*/
void simple_print_buffer(char *buffer, unsigned int size)
{
   unsigned int i;

   i = 0;
   while (i < size)
   {
       if (i % 10)
       {
           printf(" ");
       }
       if (!(i % 10) && i)
       {
           printf("\n");
       }
       printf("0x%02x", buffer[i]);
       i++;
   }
   printf("\n");
}

/**
* main - check the code for ALX School students.
*
* Return: Always 0.
*/
int main(void)
{
   char *buffer;

   buffer = create_array(98, 'H');
   if  (buffer == NULL)
   {
       printf("failed to allocate memory\n");
       return (1);
   }
   simple_print_buffer(buffer, 98);
   free(buffer);
   return (0);
}
