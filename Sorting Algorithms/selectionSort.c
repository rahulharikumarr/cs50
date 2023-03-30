#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  
    //initialising variables and the array to be sorted
    int numbers[5] = {16, 1, 13, 0, 4};
    int smallestvalue;
    int smallestposition;

    for(int i=0; i<4; i++)
    {
    smallestvalue = numbers[i];
    smallestposition = i;
    for (int j=i; j<4; j++)
    {
        
        //creating variables to allow us to swap
        if(numbers[j+1]<smallestvalue)
        {
            smallestvalue = numbers[j+1];
            smallestposition = j+1;
        }
    }
    
    //swapping smallest value in the iteration
    numbers[smallestposition] = numbers[i];
    numbers[i] = smallestvalue;
    }


    //printing the final sorted array
    for(int k=0; k<5; k++)
    {
    printf("%i ", numbers[k]);
    }

printf("\n");

    }
