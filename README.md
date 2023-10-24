# 1stYearProjects 

- 1st Assignment -
In my first assignment, I was required to develop a C program to enable a bank customers to manage their Personal Identification Number (PIN) on an automated teller machine (ATM). The PIN is any 4-digit number. The customer's default PIN has been initially assigned the numbe 1234.

The program should display a simple menu when you run. The menu should include the following options: -1.Enter PIN and verify correct
          2.Change PIN
          3.Display the number of times the PIN was entered (i) Successfully (ii) Incorrectly
          4.Exit Program

          
When the program is running, the customer should be asked to select an option from the menu above. After selecting an option, the program must do the following -> 
must then verify and show whether it is correct or incorrect.

• If they select option 2, they should be allowed to change their PIN. When
they enter the new PIN, your program must verify the new PIN by asking the
customer to re-enter this new PIN. This will verify that the new PIN entered
is correct and no errors were made. If there are any differences and the
verification fails, your program must display an appropriate error message
and the original PIN should remain the same.

• If they select option 3, your program should show the number of times the
PIN was entered both correctly and incorrectly.
• If they select option 4, your program should terminate gracefully, i.e., end.

The program should continually run and redisplay the main mnu after each option has completed ie. start over again. Only when the customer enters option 4(Exit option), should your program termninate. 
The progam should take account of input errors by the user and display appropriate error messgges.


- 2nd Year Assignment - 
I am required to develop a security authentication program based on an access
code. The access code is 4 single-digit integer numbers between 0-9. The program
should allow a user to enter a code, encrypt the number and compare it to an
authorised access code. The program should also allow the user to decrypt an already
encrypted code.

When the program begins executing, the default authorised access code is 4523
(encrypted form of 1234 – see encryption algorithm below). This code must be stored
in a 1-D array called access_code and should not be changed. I should use a
different 1-D array to store the code entered by the user.

The program should be menu-driven and must display the following simple menu
when run:
1. Enter any code
2. Encrypt code entered and verify if correct (i.e., matches the authorised access
code, i.e., 4523)
3. Decrypt code
4. Display the number of times the encrypted code entered matches the
authorised code (i) Successfully (ii) Incorrectly
5. Exit Program

