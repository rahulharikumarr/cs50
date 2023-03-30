#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //initialising variables and the array to be sorted
    int numbers[5] = {14,23,54,1,9};
    int temp = 0;

    //bubble sort 
    for (int i=0; i<4; i++)
    {
    for(int j=0; j<4; j++)
    {
        
        //swapping the two values
        if(numbers[j+1]<numbers[j])
        {
            temp = numbers[j+1];
            numbers[j+1] = numbers[j];
            numbers[j] = temp;
        }
    }
    }


    //printing the final sorted array
    for(int k=0; k<5; k++)
    {
    printf("%i ", numbers[k]);
    }

    printf("\n");
}


