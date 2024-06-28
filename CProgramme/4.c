#include<stdio.h>
int main()
{
    char n[20];
    int id[10],c[11],age[3];
    float cgpa,gpa=0.00;
    printf("Name: ");
    scanf("%s",&n);
    printf("\nContact: ");
    scanf("%s",&c);
    printf("\nID: ");
    scanf("%s",&id);
    printf("Age: ");
    scanf("%s",&age);
{


   if(age>20||age<31)

      {
         printf("\nCGPA: ");
         scanf("%f ",&cgpa);
      }
    else if(cgpa>3.5)
      {
         gpa=(26000*0.05);
          printf("congratulations!you are eligible for the job.your salary would be :%.2f ",gpa);
      }

    else
        {
            printf("congratulations!you are eligible the job.your salary would be 26000");}
        }


   else
    {
    printf("you are not eligible for the job.");
}




    return 0;

}
