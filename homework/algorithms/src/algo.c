#include "algo.h"
#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>

boo is_prime (int i){
//determines whether a number is prime or not, returns true or false

    if (i <= 1)
    {
        return false;
    }
    if (i == 2)
    {
        return true;
    }
    if (i == 3)
    {
        return true;
    }
    if(i % 2 == 0 || i % 3 == 0)
    {
        return false;
    }
    else
        return true;
}

long fibonacci(const int n)
{
    int firstNum = 0; //first number in sequence
    int secondNum = 1; //second number in sequence
    int nextNum = 1; //firstNum and secondNum added together
    int original = n; // access because n is const

    printf("Enter the nth number of the Fibonacci sequence to get its value:");
    scanf("%d", &original);

    if(original == 0 || original == 1){
        printf("%d", original);
        nextNum = original;
    }
    if (original == 2){
        nextNum = firstNum + secondNum;
        printf("%d", nextNum);
    }
    if (original >= 3){
        for (int i = 3; i <= original; i++)
        {
            firstNum = secondNum;
            secondNum = nextNum;
            nextNum = firstNum + secondNum;
        }
        printf("%d", nextNum);
    }
    return nextNum;
}

int reverse(const int n)
{
    int remainder;
    int reverse = 0;
    int original = n;  //let n be read by scanf

        printf("\nEnter an number to reverse: ");
        scanf("%d", &original);

        //gets remainder, code referenced with help from
        //https://www.simplilearn.com/tutorials/c-tutorial/c-program-to-reverse-a-number
        while (original != 0)
        {
            remainder = original % 10;
            reverse = reverse * 10 + remainder;
            original /= 10;
        }

        //tell user the reversed number
        printf("Reversed number = %d", reverse);

        return reverse;
}

int prime_factor(const int n)
{
    int original;
    original = n;

    printf("\nEnter an number to find the largest prime factor for: ");
    scanf("%d", &original);

        //made with help from
        //https://www.geeksforgeeks.org/c-program-for-find-largest-prime-factor-of-a-number/

        // get the number of 2s that divide n
        while (original%2 == 0)
        {
            original = original/2;
        }

        // n is odd, so i+2 skips an element
        for (int i = 3; i*i <= original; i = i+2)
        {
            // While i divides n, print i and divide n
            while (original%i == 0)
            {
                original = original/i;
            }
        }

        if (n > 2)
            printf ("%d ", original);

    return original;
}

int prime_sum(const int n)
{
    int sum = 0;
    int original = n;

    printf("\nEnter a number less than 1000 to get the sum of all prime factors:");
    scanf("%d", &original);

    //in case number is higher
    if (original >= 1000){
        printf("\nPlease write a number less than 1000.");
        return sum;
    }

    for (int i = 2; i < original; ++i) {
        if (is_prime(i) == true) {
            sum += i;
        }
    }
    printf("The sum of the numbers is %d\n", sum);
    return sum;
}
