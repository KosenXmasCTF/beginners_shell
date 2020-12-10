#include<stdio.h>
#include<stdlib.h>

int main() {
  char program[0x1000];

  puts("Enter your program!");
  fgets(program, 0x1000, stdin);

  FILE *fp = fopen("/tmp/program.c", "w");
  fprintf(fp, "%s", program);
  fflush(fp);

  system("gcc /tmp/program.c -o /tmp/program");
  system("/tmp/program");
}
