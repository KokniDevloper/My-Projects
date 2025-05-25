#include<stdio.h>

// Function declarations
int mainmenu(int x1);
int height();
int weight();

// Main function: Entry point of the program
int main()
{
    int x1=0;
    printf("*Welcome to Unit Converter*");
    printf("\n         Author: Sadique_Kokni\n\n");
    do {
        x1 = mainmenu(x1); // Show main menu and get user choice
    } while (x1 != 0); // Loop until user chooses to exit
    return 0;
}

// Main menu logic: Displays options and calls appropriate converter
int mainmenu(int x1)
{
    printf("\nMain Menu");
    printf("\n(To select the type of unit converter, enter it's number)\n");
    printf("\n1. Height: ");
    printf("\n2. Weight: ");
    printf("\n0. Exit\n");
    printf("\nYour Choice : ");
    scanf("%d",&x1);
    
    switch(x1)
    {
        case 1:
            printf("\nOpening Height Converter: ");
            height(); // Call height converter
            break;
        case 2:
            printf("\nOpening Weight Converter: ");
            weight(); // Call weight converter
            break;
        case 0:
            printf("\nExiting");
            break;
        default:
            printf("Error");
    }
    return x1;
}

// Height conversion logic
int height()
{
    int choice;
    float cm, in;
    printf("\n(To select a unit please enter the number next to it)\n");
    printf("\n1. cm to inches: ");
    printf("\n2. inches to cm: ");
    printf("\n0. Exit\n");
    printf("\nYour Choice : ");
    scanf("%d",&choice);
    // Validating Input
    if(choice==1||choice==2||choice==0)
    {
        if(choice==1)
        {
            printf("\nEnter height in centimeters: ");
            scanf("%f",&cm);
            in = cm / 2.54; // Convert cm to inches
            printf("\nHeight in inches = %.2f",in);
        }
        else if(choice==2)
        {
            printf("\nEnter height in inches: ");
            scanf("%f",&in);
            cm = in * 2.54; // Convert inches to cm
            printf("\nHeight in centimeters = %.2f",cm);
        }
        else{
            printf("Exiting");
        }
    }
    else
    {
        printf("Error");
        return 0;
    }
    return 0;
}

// Weight conversion logic
int weight()
{
    int choice;
    float kg, po;
    printf("\n(To select a unit please enter the number next to it)\n");
    printf("\n1. Kilograms to Pounds: ");
    printf("\n2. Pounds to Kilograms: ");
    printf("\n0. Exit\n");
    printf("\n\nYour Choice : ");
    scanf("%d",&choice);
    // Validating Input
    if(choice==1||choice==2||choice==0)
    {
        if(choice==1)
        {
            printf("\nEnter weight in Kilograms: ");
            scanf("%f",&kg);
            po = kg * 2.20462; // Convert kg to pounds
            printf("\nWeight in Pounds = %.2f",po);
        }
        else if(choice==2)
        {
            printf("\nEnter weight in Pounds: ");
            scanf("%f",&po);
            kg = po / 2.20462; // Convert pounds to kg
            printf("\nWeight in Kilograms = %.2f",kg);
        }
        else{
            printf("Exiting");
        }
    }
    else
    {
        printf("Error");
        return 0;
    }
    return 0;
}
