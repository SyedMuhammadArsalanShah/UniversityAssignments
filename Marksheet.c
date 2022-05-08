// Online C compiler to run C program online
#include <stdio.h>


int main()
{
 

// Marksheet
printf("Enter Your Name \n");
char name[20];
scanf("%s", &name);
printf("Enter Your Class\n");
int cal;
scanf("%d",&cal);
// subject marks
printf("Enter Eng Marks\n");
double eng;
scanf("%lf", &eng);
printf("Enter Urdu Marks\n");
double urdu;
scanf("%lf", &urdu);
printf("Enter Maths Marks\n");
double math;
scanf("%lf", &math);
// sum of  obtained marks
double total;
total = eng + urdu + math;
// percentage
double per = ((total / 300) * 100);

printf("-----------------------------------------------------\n");

printf("Name is  : %s \n", name);
printf("Class is : %d \n", cal);
printf("-----------------------------------------------------\n");

printf("Subject        Max.Marks    Obt.Marks       Obt.Marks\n");
printf("-----------------------------------------------------\n");
printf("English           100       %lf              \n", eng);
printf("Urdu              100       %lf              \n", urdu);
printf("Math              100       %lf              \n", math);
printf("-----------------------------------------------------\n");
printf("   Total Marks %lf  |  Percentage %lf %% \n", total, per);


// grade

if (per >= 80 && per <= 100)
{
    printf("grade = A+\n") ;
}
else if (per >= 70 && per <= 79)
{
   printf("grade = A\n");
}
else if (per >= 60 && per <= 69)
{
   printf("grade = B\n");
}
else if (per >= 50 && per <= 59)
{
   printf("grade = C\n");
}
else if (per >= 40 && per <= 49)
{
   printf("grade = D\n");
}
else
{
   printf("grade = FAIL \n")  ;
}
    return 0;
}
