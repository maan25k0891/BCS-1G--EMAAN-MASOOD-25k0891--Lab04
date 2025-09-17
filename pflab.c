#include<stdio.h>
int main()
{
   
    int number;
    int costone = 8;
    int costtwo = 15;
    int costthree = 21;
    int basecost;
    double totalcost;

    printf("How many pizzas do you want (1,2 or 3)?\n1 pizza costs $8 \n2 pizzas cost $15 \n3 pizzas cost $21\n");
    scanf("%d", &number);
    if (number >= 1 && number <= 3)
    {if (number == 1)
        {basecost = costone;
        }
        else if (number == 2)
        {basecost = costtwo;
        }
        else
        {basecost = costthree;
        }
        int crusttype;
        int crustcost;
        printf("Choose your crust type (1,2 or 3)\n");
        printf("1. Regular crust ($0)\n");
        printf("2. Thin crust ($1)\n");
        printf("3. Stuffed crust ($2)\n");
        scanf("%d", &crusttype);
        if (crusttype == 1)
        {crustcost = 0;
        }
        else if (crusttype == 2)
        {crustcost = 1;
        }
        else if (crusttype == 3)
        {crustcost = 2;
        }
        else
        {printf("Invalid crust type.\n");
            return 1; 
        }  
       char cheese;
       printf("Do you want extra cheese (Y/N)? ");
       scanf(" %c", &cheese);
       totalcost = basecost + crustcost;
       if (cheese == 'Y')
      {totalcost += 1.50;
      }
      if (number == 3 && crusttype == 3)
        {printf("You get free garlic bread!\n");
        }
      printf("The total cost is: $%.2f\n", totalcost);
    }
    else
    {printf("Invalid number of pizzas.\n");
    }
    int time;
    printf("Enter the current time (0-23): ");
    scanf("%d", &time);
    if (time >= 11 && time <= 14) {
    totalcost = totalcost * 0.9;  
    printf("Discount has been applied!"); 
    }
    printf("The total cost is: $%.2f\n", totalcost);
    char student;
    printf("Do you have a student ID (Y/N)? ");
    scanf(" %c", &student);
    if (student == 'Y') {
    totalcost -= 2.0;
    printf("The final cost is: $%.2f\n", totalcost);
	}
    return 0;
    }

