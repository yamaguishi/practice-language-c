#include <stdio.h>

/* A person can retire through the retirement system if they meet one of the following conditions:
• Is male, at least 65 years old, and has at least 10 years of contributions.
• Is male, at least 63 years old, and has at least 15 years of contributions.
• Is female, at least 63 years old, and has at least 10 years of contributions.
• Is female, at least 61 years old, and has at least 15 years of contributions.
Create a program that reads a character 'M' or 'F' representing the gender of an individual, their age, 
and their contribution time. The program should then print "Eligible for Retirement" if the individual 
meets one of the conditions above. Otherwise, the program should print "Not Eligible for Retirement".
*/

int main() {

    int age, contributions;
    char gender;

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("How many years of contributions?\n");
    scanf("%d", &contributions);

    printf("What is your gender? M for male and F for female\n");
    scanf(" %c", &gender);


    if (age >= 65 && contributions >= 10 && gender == 'M') {
       printf("Eligible for Retirement\n");
    }

    else if (age >= 63 && contributions >= 15 && gender == 'M') {
        printf("Eligible for Retirement\n");
    }

    else if (age >= 63 && contributions >= 10 && gender == 'F') {
        printf("Eligible for Retirement\n");
    }

    else if (age >= 61 && contributions >= 15 && gender == 'F') {
        printf("Eligible for Retirement\n");
    }

    else printf("Not Eligible for Retirement\n");


return 0;
}