//write a program  which is even or odd.


//function name:checkEvenOdd
//Input :Integer
//Output:boolean
//Description:checks whetther input is even odd
//Author:vidya lalji aware
//Date:25/4/2023
//



#include<stdio.h>
#include<stdbool.h>
 bool CheckEvenOdd(int iNo)
    {
        if((iNo%2)==0)
        {
            return true;
        }
        else
        {
            return false;

        }
    }

    
int main()
{
    int ivalue=0;
    bool bRet =false;
    printf("please enter number to checks whethher it is even or odd :\n");
    scanf("%d",&ivalue);
    bRet =checkEvenOdd(ivalue); ///function call


    return 0;
}