#include <stdio.h>
#include <math.h>
#define FALSE 0
#define TRUE 1

int lengthOfNumber(int num);
int isArmstrongHelper(int num, int length);

int isPalindrome(int num)
{
    if(lengthOfNumber(num) <= 1){
        return TRUE;
    }
    int lastDigit = num%10;
    int firstDigit =num/pow(10,lengthOfNumber(num) -1);
    num = num % (int)pow(10,lengthOfNumber(num)-1);
    num = num/10;
    if(lastDigit != firstDigit){
        return FALSE;
    }
    return isPalindrome(num);
}
int lengthOfNumber(int num)
{
    int length = 0;
    int toCheckLength =num;
    while(toCheckLength !=0)
    {
        toCheckLength = toCheckLength/10;
        length++;
    }
    return length;
}

int isArmstrong(int num)
{
    int length = lengthOfNumber(num);
    if(num == isArmstrongHelper(num,length))
    {
        return TRUE;
    }
    return FALSE;
}

int isArmstrongHelper(int num, int length)
{
    if(lengthOfNumber(num) == 1)
    {
        return (int)pow(num,length);
    }
    return (int)pow(num%10,length) + isArmstrongHelper(num/10,length);
}