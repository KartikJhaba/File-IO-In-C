#include <stdio.h>
int main(void)
{
    char name[50];
    int rollNumber;
    char phoneNumber[20];

    //Taking input from the user
    printf("----------------- Welcome to this program, Please enter your details----------------");
    printf("\nEnter your name : ");
    scanf("%s",name);
    fflush(stdin);
    printf("\nEnter your Roll : ");
    scanf("%i",&rollNumber);
    printf("\nEnter your Phone : +91-");
    scanf("%s",phoneNumber);

    //Opening a file named [database.txt] in appending mode
    //here fopen() is returning the address of the file so we are storing it into a FILE type pointer named [file]
    FILE *file = fopen("database.txt","a");

    //adding data to the file
    fprintf(file,"Name: %s || Roll: %i || Phone: +91-%s\n",name,rollNumber,phoneNumber);

    //closing the file
    fclose(file);
    return 0;
}