#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{
    int num1, num2, num3, sum=0, result,flag;
    char op1, op2;
    int count,N,second;
    srand(time(NULL)); 
    printf("请输入想要产生题目的数目：");
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        do
        {
        num1 = rand() % 100+1;
        num2 = rand() % 100+1;
        num3 = rand() % 100+1;
        second = num1 / num2;
        count = second - num3;
        } while (count <= 0);
        switch (num1 % 4)
        {
            case 0:
            op1 = '+';
            break;
            case 1:
            op1 = '-';
            break;
            case 2:
            op1 = '*';
            break;
            case 3:
            op1 = '/';
            break;
            default:
            break;
        }
        switch (num2 % 4)
        {
            case 0:
              op2 = '+';
              flag = 0;
              break;
            case 1:
              op2 = '-';
              flag = 0;
              break;
            case 2:
              op2 = '*';
              if((op1=='*')||(op1=='/')) 
                 flag = 0;
              else 
                 flag = 1;
              break;
            case 3:
              op2 = '/';
              if((op1=='*')||(op1=='/')) 
                 flag = 0;
              else 
                 flag = 1;
              break;
            default:
            break;
        }
        sum++;
    
        if(flag==0)
        {
            result = 0;
            switch (op1)
            {
                case '+':
                  result = num1+num2;
                  break;
                case '-':
                  result = num1-num2;
                  break;
                case '*':
                  result = num1*num2;
                  break;
                case '/':
                  result = num1/num2;
                  break;
                default:
                  break;
            }
            switch (op2)
            {
                case '+':
                  result += num3;
                  break;
                case '-':
                  result -= num3;
                  break;
                case '*':
                  result *= num3;
                  break;
                case '/':
                  result /= num3;
                  break;
                default:
                  break;
            }
        }
        else
        {
            result = 0;
            switch (op2)
            {
                case '+':
                    result = num2+num3;
                  break;
                case '-':
                  result = num2-num3;
                    break;
                case '*':
                  result = num2*num3;
                  break;
                case '/':
                  result = num2/num3;
                  break;
                default:
                  break;
            }
            switch (op1)
            {
                case '+':
                  result = num1 + result;
                  break;
                case '-':
                  result = num1 - result;
                  break;
                case '*':
                  result = num1 * result;
                  break;
                case '/':
                  result = num1 / result;
                  break;
                default:
                  break;
            }
        }
        printf("%d %c %d %c %d =",num1,op1,num2,op2,num3);
        printf("%d   \t", result);
        printf("\n");
    }
   printf("\n出题完成，感谢使用");
   return 0;
}