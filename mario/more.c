#include <cs50.h>
#include <stdio.h>

int main(void)
{

int n;

    //getting input for pyramid height
    do
    {
        n = get_int("Enter the height of the pyramid: ");
    }
    while(n<1 || n>8);


    //printing left pyramid
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<i+1; j++)
        {
            for(int k=i+1; k<n; k++)
            {
                printf(" ");
            }

           for(int hash=i+1; hash>0; hash--)
           {
                printf("#");
           }

            printf("  ");

            //adjacent pyramid
            for(int a=i; a<i+1; a++)
            {
                for(int b=i+1; b>0; b--)
                {
                    printf("#");
                }
            }

        }
        printf("\n");
    }

}
