/*
In this assignment I have to build a C program that acts like a ATM. The program should be able to let the user enter a PIN and be verified, change the pin,
Count the amount of times the pin has been succesfully entered and incorrectly entered*

Author: Mary Anne Flores || C20461582
Compiler used : Visual Studio Code 
Date Finished : 21/11/2020
*/

#include <stdio.h>


int main (void)
{
    int option = 0;       //a variable Im going to use for the user to pick from option one to four
    float bank_pin = 0;  //This is the PIN givin 
    float new_pin = 0;  //This is the new PIN the user enters
    int correct = 0 ;  //The valid and invalid will be for option 3 
    int incorrect = 0;//for the counting of success and incorrect
    int end = 4;     //I used this variable for option 4 in my while loop
    int entry = 0;  //I used this variable for option 3 when checking for the succesfull and incorrect entries
    int num = 0;   //I used this as variable for option 4, for my while loop


    // Im using a do while loop for 
    //Start of do while loop 
    while( option != 4)
    {
        //This will act as my menu for the user to enter their option 
        printf("\n\n Please pick an option \n\n 1.) Please enter PIN and verify \n\n 2.) Change PIN \n\n 3.) Display the number of times \n(i) succesffully  \n(ii)incorrectly \n\n 4.) Exit Program\n\n\n");
        scanf("%d", &option);

        //Start of option 1
        if (option == 1)
        {
            //This is asking the user to enter their PIN
            printf("Please enter your PIN\n");
            scanf("%f", &bank_pin);

            
            //This is telling the program that if bank pin entered is equals to 1234 it should print out a succesfull statemnt 
           if (bank_pin == 1234 || new_pin)
            {
                printf("PIN succesfully entered\n");
                correct++;
            }
            //Otherwise if the PIN entered is not equal to 1234 is should print out an invalid statement 
            else
            {
                printf("Invalid Pin, Please try again later\n");
                incorrect++;
            }
        }//End of option 1




        //Start of option 2 
        if (option == 2)
        {
            //This is asking the user to enter their current four digit PIN as a confirmation that its the right PIN
            printf("\n Please enter your current four digit PIN\n");
            scanf("%f",&bank_pin);
            
            //This is telling the progrma that if bank pin equals 1234 or the new PIN entered it should proceed and print a statement saying it was succesfull
            if (bank_pin == 1234 || new_pin)                               
            { 
                printf("PIN successfully entered\n");

                /*This is telling the user to enter a new four digit PIN and it should corrolate to option 1 when changed so eg. when password is changed, option 1 should
                be able to read it as the new PIN and not the given PIN 1234*/
                printf("Please enter a new four digit new pin: ");
                scanf("%f",&new_pin);

                bank_pin == new_pin;
                printf("Pin succesfully changed");
            }

            /*This line of code is telling the program that if the number entered in the confirmation line from the start of option 2 is invalid it should
            print a statement saying its invalid*/
            else
            {
                printf("PIN entered was invalid please try again later\n\n\n ");
            }

        }//End of option 2




        //Start of option 3
        if(option ==3)
        {
                /*This line is going to act like a menu for option 3. Its going to ask the user for which one they want to view
                option they want to view*/
                printf("3.) Display the number of times \n\n Press 1 to see succesful enters \n\n Press 2 to see the amount of invalid entries\n\n");
                scanf("%d", &entry);


            //This is telling the program that if number 1 was entered it should print out the sucessfull entries from option 1
              if (entry == 1)
              printf("Amount of succesfull entries are:   %d \n",correct);


            //This is telling the program that if number 2 was entered it should print out the incorrect/invalid enties from option 1 
              if (entry == 2)
                printf("Amount of invalid entries are:   %d \n",incorrect);
              

        }// End of option 3




        //Start of option 4           
        if(option == 4)
        //For option 4 I decided to do a while loop. This will keep running unless you press the number four to end the program 
        while (num !=4)
        {
            //This is telling the user to enter the number 4 to end the program otherwise it will keep going.
            printf("\n Please press 4 to end the program\n");
            scanf("%d", &num);

            end = end + num;
    
        } //End of option 4




    } //End of do while loop  
    return 0;


}//End of main 


