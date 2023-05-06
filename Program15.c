

//Display 1 to 5 number print
#include<stdio.h>

void display(int iNo)
{
    int iCnt=0;
    if(iNo<0)//filter
    {
        printf("please enter the positive number\n");
        return;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
    int main()
    {
        int ivalue=0;
        printf("enter  frequency:\n");
        scanf("%d",&ivalue);
        display(ivalue);
    
    return 0;


}