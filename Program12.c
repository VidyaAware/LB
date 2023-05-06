//display "Jay Ganesh" 5 times on screen

#include<stdio.h>
//Example of iteration
void Display(int iNo)
{
    int icnt=0;
    if(iNo<0)//filter
    {
        printf("please enter the positive number\n");
        return;
    }
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
