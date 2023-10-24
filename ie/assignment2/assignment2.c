!/*  In this Assignment I have to develop a security authentication program 
    based on an access code.. The access code is a 4 signle digit integer numbers 
    between 0-9. The program should allow the user to enter a code, encrypt
    the number and compare it to an authorised code.

    My program should show a menu with five options such as entry code,
    encrypt code, decrypt code, show how much code have been entered succesfully 
    and unsuccesfully and last is for the program to end gracefully

    Author : Mary Anne Flores | C20461582
    Compiler Used : Visual Studio Code
    Date Finished: 6/03/2021
*/

#include <stdio.h>

//symbolic name I useed for my array Size
#define SIZE 4

//Function Structure
int access_code[SIZE]={4,5,2,3};

void swap_code(int*,int*);

//Start of the main 
int main()
{
    int option = 0;                   //A variable I used for the user to pick a number from 1-5.
    int values[SIZE];                //Used in option 1, for numbers entered in the program.
    int enter_code[SIZE]={0};       //Used to compare the values.
    int count;                     //Used for option 4, for pressing 1 and 2 to count succesfull entries and incorrect entries.
    int correct = 0;              //Used for option 4 as a counter for the amount of Succesfull entries.
    int wrong = 0;               //Used for option 4 as a counter for the amount of Invalid entries.
    int i;                      //Used in option 1
    int y;                     //Used in option 4
    int encrypt = 0;          //Used in option 2 for encryption
    int j;                   //Used in option 3
    int decrypt;            //Used in option 3 for decryption
    int pick;              //Used in option 5
    int end = 5;          //Used in option 5 to press number 5 to end the program 


    //Im using a while loop for the menu
    while(option != 5)

    //start of the menu
    {
        printf("\n\n Please pick an option\n\n 1.)Enter any code \n\n 2.)Encrypt code entered \n\n 3.)Decrypt Code \n\n 4.)Display the numbers encrypted and decrypted \n\n 5.)End Program\n\n");
        scanf("%d", &option);

        //Start of option 1
        if (option == 1)
        {
            
            //Tells the user to enter 4 digits
            printf("\n\nPlease enter a four  digit code\n");
            
            //Enter data into the array
            for(int i = 0; i < SIZE; i++)
            {
                scanf("%d", &values[i]);
            }
              
                //Start of For 
               for(i = 0; i < SIZE; i++)
               {
                   //Comparing values you entered to 4 digits
                   if(values[i] <= 9)
                   {
                       printf("\n\n Code entered is SUCCESSFUL");
                      
                   }
                   else
                   {
                      printf("\n\n Code entered is INVALID, Please enter a number between 0-9");
                      wrong++;
                   }

                   //I put a break here to stop it from running and to only print one statement instead of four
                   break;
                }//End for      

        }//End of option 1




        //Start of option 2
        if(option == 2)
        {
            //Tells the user the entered numebr from option 1
            printf("\n\nThe numbers entered from option 1 are :\n");

            //Start for
            for( i = 0; i < SIZE; i++)
            {
                printf("%d", values[i]);
            }//End for
            
            //This will tell the user the encrypted number
            printf("\n\nThe numbers encrypted are : \n\n");
            correct++;
            
            //start for
            for( j = 0; j < SIZE; j++)
            {
                //Swapping numbers
                encrypt = values[0];
                values[0] = values[2];
                values[2] = encrypt;

                //This adds 1 to each of the numbers encrypted
                values[j] = values[j] + 1;
                
                {
                  printf("%d", values[j]);  
                }
            }//End for  


        }//End of option 2

        

        //start of option 3
        if (option ==3)
        {

            //Tells the user the entered numebr from option 1
            printf("\n\nThe numbers entered from option 2 are :\n");

            //Start for
            for( j = 0; j < SIZE; j++)
            {
                printf("%d", values[j]);
            }//End for


            //Tells user the decrypted number
            {
                 printf("\n\n Decrypted numbers are :\n\n");

                 for (y = 0; y < SIZE; y++)
                 
                 
                 {
                    //swapping numbers
                    decrypt = values[0];
                    values[2] = values[2];
                    values[0] = decrypt;

                    //puts a -1 to each of the numbers
                    values[y] = values[y] - 1;

                    {
                        //prints encrypted number with 1 added.
                        printf("%d", values[y]);
                    }

            
                 }//End for


            }//ends decrypted

        }//end option 3



        //Start of option 4
        if( option == 4)
        {

            //Tells the user to pick either 1 or 2 to see succussfull and invalid  encryption 
            printf("Display the amount of times the encrpted code entered matches the authorised code\n\n(1) Succssfully\n(2) Inorrectly\n\n");
            scanf("%d", &count);

            if (values[j] = access_code[SIZE])
            {
                correct++;
            }
            else (values[j] != access_code[SIZE]);
            {
                wrong++;
            }

            //when the user presses 1 
            if(count == 1)
            {
                printf("\n\nSuccessfully encrypted is: %d", correct);
            }
            //When user presses 2
            if(count ==2)
            {
                printf("\n\nInocrrectly encrypted is: %d", wrong);
            }

        }//End of option 4




        //Start of option 5
        if( option == 5)
        {
            while (pick != 5)

            //start of while loop
            {
                //start of loop, this will keep telling the user to enter to press 5 to exit the program
                //Other wise it will continue running 

                printf("Please press 5 to exit the program");
                scanf("%d", &pick);

                end = end + pick;
            }//End of while loop

        }//End of option 5

    }//End of the menu

}//End of main 