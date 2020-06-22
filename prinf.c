#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 7;
    double d = 3.0;
    char s[] = "X ";

    int num;
    double fra;
    char str[40];
    char temp;
    char mess[100];
    // Declare second integer, double, and String variables.
    scanf("%d",&num);
    scanf("%lf",&fra);
    scanf("%c",&temp);
    scanf("%[^\n]",str);
    // Read and save an integer, double, and String to your variables.
    printf("%d\n", i+num);
    // Print the sum of both integer variables on a new line.
    printf("%.1f\n", d+fra);
    // Print the sum of the double variables on a new line.
    strcpy(mess, s);
    strcat(mess, str);
    printf("%s", mess);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}