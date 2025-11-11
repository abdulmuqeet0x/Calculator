
// gcc calculator_project.c -o calculator_project
// ./calculator_project

#include<stdio.h>
#include<math.h>


// Function Declaration

void Add(float x , float y);
void sub(float x , float y);
void mul(float x , float y);
void divi(float x , float y);
void sqr(float x );
void sqrt1(float x);
void drawline(char ch1, char ch2, int n);


// Main Section
int main()
{
    drawline('*','-',30);
    printf("\n\n \t\t	- CALCULATOR -  \n\n");
    drawline('*','-',30);
    printf("\n\n\tDesigned by ABDUL MUQEET RAJPUT (25BSCS(E) )\n\n");
    drawline('*','-',30);

    int category = 0;


// select Category and reccive valuews.
    do{

        printf("\n\n");
        printf("Select Category:\n\n");
        printf(" 1. Basic Operations\n");
        printf(" 2. Additional Functions\n");
        printf(" 3. Exit\n\n");
        printf(" Select Catgory  Here: ");
        scanf("%d",&category);
        
        

        if(category == 1)
        {   
            float num1 , num2 ;
            int operat;
			printf("\n\n");
            printf("Select Operator:\n\n");
            printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n\n");
            printf("Select here: ");
            scanf("%d",&operat);
            
        

            switch (operat)

            {
            case 1:
                
                drawline('~','.',30);
                printf("\n\n Enter First Value: ");
                scanf("%f",&num1);
                printf(" Enter Second Value: ");
                scanf("%f",&num2);
                Add(num1,num2);
                drawline('~','.',30);
                break;

            case 2:
				drawline('~','.',30);
                printf("\n\n Enter First Value: ");
                scanf("%f",&num1);
                printf(" Enter Second Value:");
                scanf("%f",&num2);
                sub(num1,num2);
                drawline('~','.',30);
            
            case 3:
				drawline('~','.',30);
                printf("\n\n Enter First Value:");
                scanf("%f",&num1);
                printf("Enter Second Value: ");
                scanf("%f",&num2);
                mul(num1,num2);
                drawline('~','.',30);
                break;

            case 4:
				drawline('~','.',30);
                printf("\n\n Enter First Value: ");
                scanf("%f",&num1);
                printf("Enter Second Value: ");
                scanf("%f",&num2);
                divi(num1,num2);
                drawline('~','.',30);
                break;

            default:
                break;
                printf(" Something went wrong!");
            }

        }

        else if(category == 2)
        {
            int scientific;
            float num3;


            printf("\n\n");
            printf("Select Category:\n\n");
            printf("1. Square\n");
            printf("2. Square Root\n\n");
            printf("Select Category Here: ");
            scanf("%d",&scientific);
            printf("\n\n");

		
            switch (scientific)
            {
            case 1:
                drawline('~','.',30);
                printf("\n Enter Value:");
                scanf("%f",&num3);
                sqr(num3);
                drawline('~','.',30);
                break;

            case 2:
                drawline('~','.',30);
                printf("\n Enter Value:");
                scanf("%f",&num3);
                sqrt1(num3);
                drawline('~','.',30);
                break;
            
            default:
                break;
                printf(" invalid selection try again with valid selection");
            }
             
        }

        else if(category > 3)
        {
            printf(" Invalid input! Please try again.");

        }
    }
        while(category != 3);
        {
            printf("\n\n Thank you for using Calculator!");
        }

    }
    
void drawline(char ch1 , char ch2, int n)
{ 
    int i;
    for(i=0;i<n;i++)
    {
        printf("%c%c",ch1,ch2);
    }
}

void Add(float x, float y)
{
    printf("\n  %.2f\n    +\n  %.2f\n  -----\n  %.2f\n\n",x,y,x+y);
}

void sub(float x, float y)
{
    printf("\n  %2.f\n    -\n %.2f\n  -----\n  %.2f\n\n",x,y,x-y);
}

void mul(float x , float y)
{
    printf("\n  %.2f\n    *\n %.2f\n  ----\n  %.2f\n\n",x,y,x*y);
}

void divi(float x , float y)
{
    if(y == 0)
    {
        printf(" Zero is not Divisble. Enter Valid value.");
    }
    printf("\n  %.2f\n    /\n%.2f\n  -----\n  %.2f\n\n",x,y,x/y);
}

void sqr(float x)
{
    printf("\n  %.2f\n  -----\n  %.2f\n\n",x,x*x);
}

void sqrt1(float x)
{
    printf("\n  %.2f\n  -----\n   %.2f\n\n",sqrt(x));
}

