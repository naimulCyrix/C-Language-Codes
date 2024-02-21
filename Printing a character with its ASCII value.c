#include <stdio.h>

int main() {
  char ch;

  printf("Enter a character: ");
  scanf("%c", &ch);
  printf("The character '%c' has an ASCII value of %d\n", ch, ch);

  return 0;
}
