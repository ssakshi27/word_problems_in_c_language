// In the ATM program, the user has to select an option from the options displayed on the screen.
// The options are related to withdraw the money, deposit the money, check the balance, and exit.
// To withdraw the money, we simply get the withdrawal amount from the user and remove that amount from the total balance and print the successful message.
// To deposit the money, we simply get the deposit amount from the user, add it to the total balance and print the successful message.
// To check balance, we simply print the total balance of the user.
// We use the exit(0) method to exit from the current Transaction mode and return the user to the home page or initial screen.

#include<stdio.h>
int withdraw();
int deposite();
int welcome();
int main ()
{
    int choice,with,depo,num,bal=10000,q;
   // char q;
	//choice=welcome();
	do
	{

	printf("WELCOME TO KOTAK MAHINDRA BANK ATM SERVICES \n");
    printf("********************\n");
    printf("PRESS 1 FOR TO WITHDRAW THE MONEY\n");
    printf("PRESS 2 FOR TO DEPOSITE THE MONEY\n");
    printf("PRESS 3 FOR TO CHECK THE BALANCE\n");
    printf("PRESS 4 FOR EXIT\n");
    printf("********************\n");
    printf("ENTER YOUR CHOICE\n : ");
    scanf("%d",&choice);

	switch(choice)
	{
	    case 1:
            withdraw();
            break;

        case 2:
            printf("/nYOYR ACCOUNT BALANCE IS %d\n",bal);
            break;

        case 3:
            deposite();
            break;

        case 4:
            printf("\n WE ARE THANKFUL TO YOU FOR USING ASHISH SIR ATM SERVICES!");
            break;

        default:
            printf("\n YOU HAVE MADE INVALID CHOISE");
	}

    printf("\n*********************\n");
    printf("\n\n 1. WOULD YOU LIKE TO HAVE ANOTHER ATM TRANSACTION?\n\n");
	scanf("%d",&q);
	}
	while(q==1);

    return 0;
}

int welcome()
{
	int choice;

}
int withdraw()
{
	int with,num,bal=10000;
	printf("/nENTER THE VALUE YOU HAVE TO WITHDRAW");
            scanf("%d",&with);
            if(with%100!=0)
                {
                    printf("\n YOU ARE REQUESTED TO INSERT THE AMOUNT IN MULTIPLES OF 100");
                }
            else if (with > bal)
                    {
                        printf("\n YOU ARE HAVING AN INSUFFICIENT BALANCE");
                    }
            else
                {
                    num=bal-with;
                    printf("\n YOU CAN KNOW COLLECT THE CASH");
                    printf("\n THE CURRENT BALANCE IS %d",num);
                }
}

int deposite()
{
	int depo,num,bal=10000;
	printf("/nENTER THE VALUE YOU HAVE TO DEPOSITE");
            scanf("%d",&depo);
            num=bal+depo;
            printf("/n NOW YOUR TOTAL BALACE IS %d",num);
}
