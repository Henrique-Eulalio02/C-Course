#include <stdio.h>

int main() {
  int age = 10;
  float pi = 3.14;
  char grade = 'a';
  char name[8] = "henrique";

  printf("Hello %s\n", name);
  printf("You are %d years old\n", age);
  printf("The pi is: %f\n", pi);
  printf("Your grade is: %c\n", grade);

  return 0;
}