//display "Jay Ganesh" 5 times on screen

#include<stdio.h>
//Example of iteration
void Display(int iNo)
{
    int icnt=0;
    for(icnt=1;icnt<=iNo;icnt++)
    {
  printf("Jay Ganesh...\n");
}


}
int main()
{
    int iValue=0;
    printf("Enter the frequency of Jay Ganesh Statement:\n");
    scanf("%d",&iValue);

    Display(iValue);
return 0;
}
