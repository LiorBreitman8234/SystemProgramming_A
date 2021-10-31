#include <stdio.h>
#include <math.h>
#define FALSE 0
#define TRUE 1

int lengthOfNumber(int num);
int reverse(int num);

int isArmstrong(int num){
    int length = lengthOfNumber(num);
    int testFinal = num;
    int sum =0;
    for(int i =0; i < length;i++)
    {
        int digit = num%10;
        num = num/10;
        sum += pow(digit,length);
    }
    if(sum == testFinal)
    {
        return TRUE;
    }
    return FALSE;
}


int reverse(int num){
    int newNum =0;
    int length = lengthOfNumber(num);
    for(int i =0; i <length;i++)
    {
        int digit = num%10;
        num = num/10;
        newNum += (digit*pow(10, length-i-1));
    }
    return newNum;
}

int isPalindrome(int num){
    int length = lengthOfNumber(num);
    int reverseNum = reverse(num);
    if(length <= 1)
    {
        return TRUE;
    }
    
    if(num == reverseNum)
    {
        //printf("num: %d, reversed: %d  \n",num, reverseNum);
        return TRUE;
    }
    return FALSE;
}

int lengthOfNumber(int num){
    int length = 0;
    int toCheckLength =num;
    while(toCheckLength !=0)
    {
        toCheckLength = toCheckLength/10;
        length++;
    }
    return length;
}