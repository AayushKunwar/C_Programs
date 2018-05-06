#include <stdio.h>

int main()
{
char name [100]; //defining string variable
int age, dob = 0; // defining integer variable

printf("What is your name: "); // message display
scanf("%s", &name); //scanning string input

printf("So %s, what is your year of birth (in B.S.)? ", name);
scanf("%d", &dob);

age = 2075 - dob; // calculation
// \n brings to new line.
printf("\n%s,00 your age is %d.",name,age);

return 0;
}
