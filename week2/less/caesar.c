#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
bool check_for_digits(string input);

int main(int argc, string argv[])
{

    if(argc!=2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    if(check_for_digits(argv[1])==false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //variable to store key

    string keystring = argv[1];

    //converts string argument to an integer value
    int key = atoi(keystring);


    //getting our plain text
    string plaintext = get_string("plaintext: ");

    //finding length of the plain text for the loop so we can run it through
    int n =strlen(plaintext);

    //printing the cipher text
    printf("ciphertext: ");
    for(int i=0; i<n; i++)
    {
        if((plaintext[i]>=65 && plaintext[i]<=90) || (plaintext[i]>=97 && plaintext[i]<=122))
        {
        printf("%c", plaintext[i]+key);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}

//function for the check_for_digits process
bool check_for_digits(string input)
{
    int count=0;
    int n = strlen(input);
    for(int i=0; i<n; i++)
    {
        if(input[i]>='0' && input[i]<='9')
        {
            count++;
        }
    }
    if (count==strlen(input))
    {
        return true;
    }

    return false;
}
