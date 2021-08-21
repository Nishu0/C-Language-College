/* 
Problem Statement::Write a C program that will output this passage by Michael Singer. 
Make sure your output looks exactly as shown here (including spacing, line breaks,
punctuation, and the title and author). Use Required Escape Sequence and ASCII Value.

There are three shapes in the output: Smiling Face, Diamond & Heart.
The ASCII Value for Smiling face is 1.
The ASCII Value for Diamond is is 4.
The ASCII Value for Heart is is 3
*/

#include<stdio.h>

int main() {
  char a = 1, b = 4, c = 3;
  printf("%c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c\n", 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1);
  printf("%c \"If you are resisting something, you are feeding it.\t\t\t%c\n", 4, 4);
  printf("%c \tAny energy you fight, you are feeding it.\t\t\t%c\n", 3, 3);
  printf("%c \t\tIf you are pushing something away,\t\t\t%c\n", 1, 1);
  printf("%c \t\t\tYou are inviting to stay.\" by Michael Singer\t%c\n", 4, 4);
  printf("%c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c", 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1, 4, 3, 1);
  return 0;
}
