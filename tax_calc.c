//Income Tax Slab	Tax Rate
//Up to Rs.2.5 lakh	Nil
#include<stdio.h>
void main()
{
    int num,tax=0;
    printf("Enter a Value");
    scanf("%d",&num);
    //Above Rs.2.50 - Rs.5 lakh	5% of the total income that is more than Rs.2.5 lakh

    if(num>=250000 && num<=500000);
    tax=(num-250000)*0.05;
    printf("%d is tax amount of %d",tax,num);

    //Above Rs.5 lakh - Rs.7.50 lakh	10% of the total income that is more than Rs.5 lakh + Rs.12,500

    else if(num>=500000 && num<=750000);
    tax=((num-250000)*0.010)+12500;
    printf("%d is tax amount of %d",tax,num);

    //Above Rs.7.50 lakh - Rs.10 lakh	15% of the total income that is more than Rs.7.5 lakh + Rs.37,500

    else if(num>=750000 && num<=1000000);
    tax=((num-250000)*0.015)+37500;
    printf("%d is tax amount of %d",tax,num);

    //Above Rs.10 lakh - Rs.12.50 lakh	20% of the total income that is more than Rs.10 lakh + Rs.75,000

    else if(num>=1000000 && num<=1250000);
    tax=((num-250000)*0.020)+75000;
    printf("%d is tax amount of %d",tax,num);

    //Above Rs.12.50 - Rs.15 lakh	25% of the total income that is more than Rs.12.5 lakh + Rs.1,25,000

    else if(num>=1250000 && num<=1500000);
    tax=((num-250000)*0.025)+125000;
    printf("%d is tax amount of %d",tax,num);

    //Above Rs.15 lakh	30% of the total income that is more than Rs.15 lakh + Rs.1,87,500

    else
    tax=((num-1500000)*0.030)+187500;
    printf("%d is tax amount of %d",tax,num);


}
