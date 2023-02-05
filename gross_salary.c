// WRITE A PROGRAM TO FIND THE GROSS SALARY OF USER...
#include<stdio.h>
void main()
{
    int gross_salary,sum,sub,temp,basic_salary,total_leaves,medical_allowance = 12000,TA=8000,HRA,DA,TDS=500,PF,medical_insurance=5550,MA=3000;
    printf("\nEnter the Basic Salary :  ");
    scanf("%d",&basic_salary);

    printf("\nEnter the Total Leaves  :  ");
    scanf("%d",&total_leaves);

    HRA= basic_salary*0.40; // HRA calculated by 40% of user's salary
    DA= basic_salary*0.15;  // DEARNESS ALLOWANCE calculated by 15% of user's salary
    TDS=TDS*total_leaves;
    PF=basic_salary*0.12; // PF calculated by 12% of user's salary
    sum= medical_allowance+TA+HRA+DA+MA;
    sub= medical_insurance+PF+TDS;
    temp= basic_salary+sum;
    gross_salary= temp-sub;
    printf("\n ******************************************************************************************");
    printf("\n BASIC SALARY : %d",basic_salary);
    printf("\n ------------------------------------ALL THE ALLOWANCES------------------------------------");
    printf("\n MEDICAL ALLOWANCE : %d",medical_allowance);
    printf("\n TRAVELLING ALLOWANCE (TA): %d",TA);
    printf("\n HOUSE RENT ALLOWANCE(HRA) : %d",HRA);
    printf("\n DEARNESS ALLOWANCE (DA) : %d",DA);
    printf("\n MEAL ALLOWANCE : %d",MA);
    printf("\n\n TOTAL ALLOWANCE : %d\n",sum);
    printf("\n ------------------------------------ALL THE DEDUCTIONS------------------------------------");
    printf("\n MEDICAL INSURANCE : %d",medical_insurance);
    printf("\n PROVIDED FUND (PF) : %d",PF);
    printf("\n TDS : %d",TDS);
    printf("\n\n TOTAL DEDUCTION : %d\n",sub);
    printf("\n ------------------------------------TOTAL GROSS SALARY------------------------------------");
    printf("\n GROSS SALARY : %d",gross_salary);
    printf("\n ******************************************************************************************");






}
