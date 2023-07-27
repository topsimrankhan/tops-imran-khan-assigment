// C program to reverse a string
// using recursion
# include <stdio.h>
 
// Function to print reverse 
void reverse(char *str)
{
  if (*str)
  {
    reverse(str + 1);
    printf("%c", *str);
  }
}
 

int main()
{
  char a[] = "imran khan";
  reverse(a);
  
  
  return 0;
}
