#include <stdio.h>
#include <math.h>
#define FALSE 0
#define TRUE 1

int factorial(int num);

int isStrong(int num){
    int sum =0;
    int checkLength = num;
    int length =0;
    while(checkLength!=0)
    {
        checkLength  = checkLength/10;
        length++;
    }
    int checkSum = num;
    for(int i =0; i <length;i++)
    {
        int digit = num%10;
        num = num/10;
        sum += factorial(digit);
    }
    if(sum == checkSum)
    {
        return TRUE;
    }
    return FALSE;
    


}

int factorial(int num){
    if(num ==0)
    {
        return 1;
    }
    if(num ==1)
    {
        return 1;
    }
    return num*factorial(num-1);
}

int isPrime(int num){
    if(num == 2)
    {
        return TRUE;
    }
    if(num <=1)
    {
        return FALSE;
    }
    double sqrtNum = sqrt(num);
    for(int i = 2; i < sqrtNum;i++){

        if(num%i == 0){
            return FALSE;
        }
    }
    return TRUE;
}