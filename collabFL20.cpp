// Menu program for Programming Final Project
// Used with Github to ensure that studentsknow the GitHub process

// ***************************************************************
// DO NOT MODIFY THIS SECTION
// ***************************************************************
#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>
#include <fstream>
#include <string>
using namespace std;

string semester = "Fall 2020";

// ***************************************************************
// Function Prototypes Section
// Add your function protytpe here.
// ***************************************************************

void showMenu();
void menu24Smiley(int);
void menu16Smith(int);


// ***************************************************************
// END OF FUNCTION PROTOTYPE AREA
// ***************************************************************

int main()
{
   int choice;       // To hold a menu choice
   
   // Constants for the menu choices
   const int MAXCHOICE = 30;
   const int MINCHOICE = 1;
   const int EXIT = 0;

   do
   {
      // Display the menu and get the user's choice.
      showMenu();
      cout << "Enter your selection (0 to exit): ";
      cin >> choice;
      
      // Validate the menu selection.
      if( choice == EXIT)
      {
         cout << endl;
         cout << "Thank for using the " << semester << " Menu Program. " << endl;
         cout << "Have a nice day." << endl;
      }
      else
      {
         switch (choice)
         {
            case 1:                 // Aldossary - call to function goes here
                  break;
            case 2:                 // Attar - call to function goes here
                  break;
            case 3:                 // Caldwell - call to function goes here
                  break;
            case 4:                 // Chanthara - call to function goes here
                  break;
            case 5:                 // Dodd - call to function goes here
                  break;
            case 6:                 // Dominguez - call to function goes here
                  break;
            case 7:                 // Fanta - call to function goes here
                  break;
            case 8:                 // Fuentes - call to function goes here
                  break;
            case 9:                 // Garcia - call to function goes here
                  break;
            case 10:                 // Guerrero Rivas - call to function goes here
                  break;
            case 11:                 // Harerimana - call to function goes here
                  break;
            case 12:                 // McNary - call to function goes here
                  break;
            case 13:                 // Mendoza - call to function goes here
                  break;
            case 14:                 // Price - call to function goes here
                  break;
            case 15:                 // Shrestha - call to function goes here
                  break;
            case 16:                 // Smith - call to function goes here
                  menu16Smith();
               break;
            case 17:                 // Soepangat - call to function goes here
                  break;
            case 18:                 // Souhala - call to function goes here
                  break;
            case 19:                 // Sundance - call to function goes here
                  break;
            case 20:                 // Swift - call to function goes here
                  break;
            case 21:                 // Tourkakis - call to function goes here
                  break;
            case 22:                 // Turcios - call to function goes here
                  break;
            case 23:                 // Vasquez - call to function goes here
                  break;
            case 24:                 // Smiley - call to function goes here
                  menu24Smiley(11);
                  break;
         }
      }
   } while (choice != EXIT);
      
   return 0;
}

//*****************************************************************
// Definition of function showMenu which displays the menu.       *
//*****************************************************************

void showMenu()
{
   cout << "*******************************************************************" << endl;
   cout << "*   Welcome to the " << semester << "Program!                     *" << endl;
   cout << "*      Make a selection from the list below to see student output *" << endl;
   cout << "*                                                                 *" << endl;
   cout << "*      Enter 0 and press Enter to Quit.                           *" << endl;
   cout << "*******************************************************************" << endl;

   cout << "1.  Aldossary" << endl;
   cout << "2.  Attar" << endl;
   cout << "3.  Caldwell" << endl;
   cout << "4.  Chanthara" << endl;
   cout << "5.  Dodd" << endl;
   cout << "6.  Dominguez" << endl;
   cout << "7.  Fanta" << endl;
   cout << "8.  Fuentes" << endl;
   cout << "9.  Garcia" << endl;
   cout << "10. Guerrero Rivas" << endl;
   cout << "11. Harerimana" << endl;
   cout << "12. McNary" << endl;
   cout << "13. Mendoza" << endl;
   cout << "14. Price" << endl;
   cout << "15. Shrestha" << endl;
   cout << "16. Smith" << endl;
   cout << "17. Soepangat" << endl;
   cout << "18. Souhala" << endl;
   cout << "19. Sundance" << endl;
   cout << "20. Swift" << endl;
   cout << "21. Tourkakis" << endl;
   cout << "22. Turcios" << endl;
   cout << "23. Vasquez" << endl;
   cout << "24. Smiley" << endl;
   cout << endl;
}

// *****************************************************************************************
// Function Defintions Section
// *****************************************************************************************
// Add your function below.  
//    Things to check:
//          Function prototype added at the top
//          Available "includes" that could be used
//          Function called from showMenu()
//          All return types MUST be void.
//  
// FunctionName:  menuXXYYYYYYYYYYYY(your parameters)
//                     where XX is your menu number and
//                           YY is your last name with no spaces (camel case)           
// *****************************************************************************************

// *****************************************************************************************
// MENU ID:          24
// FUNCTION:         menu24Smiley
// DESCRIPTION:      prints the Fibonacci series as defined by the input value
// OUTPUT EXAMPLE:   User enters 9
//                   Program outputs the following:
//                      Fibonacci Sequence (9 iterations): 0, 1, 1, 2, 3, 5, 8, 13, 21
// *****************************************************************************************
void menu24Smiley(int numberOfTimes)
{
   int current = 0;
   int next  = 1;
   int nextTerm;

   cout << endl;
   cout << endl;

   cout << "Fibonacci Sequence (" << numberOfTimes << " iterations): ";

   for (int i = 1; i <= numberOfTimes; i++)
   {
         
      if(i == 1)                    // Prints the first term
      {
         cout << current;
      }
      else if(i == 2)               // Prints the second term
      {
         cout << next;
      }
      else                          // Prints all subsequent terms
      {
        nextTerm = current + next;
        current = next;
        next = nextTerm;
        
        cout << nextTerm;
      }

      if((i + 1) <= numberOfTimes)
      {
         cout << ", ";
      }
   }

   cout << endl;
   cout << endl;
}


// *****************************************************************************************
// MENU ID:          16
// FUNCTION:         menu16Smith
// DESCRIPTION:      Prints ASCII Picture 
// OUTPUT SAMPLE:    Christmas Tree
// *****************************************************************************************


void menu16Smith()
   
{
cout << " *     *  MERRY CHRISTMAS!! *    *" << endl;
cout << "      *     *        *      *" << endl;
cout << "    *    *       ##      *    *" << endl;
cout << "  *    *       #    #  *    *    *" << endl;
cout << "     *    *     #  #      *    *" << endl;
cout << "   *     *       ||     *    *" << endl;
cout << " *     *   *    @||@  *    *    *" << endl;
cout << "   *  *        |||@||    *    *" << endl;
cout << " *       *    |@||||@|  *        *" << endl;
cout << "    *        ||||||||||      *" << endl;
cout << "  *    *    | @||||||@ |   *    *" << endl;
cout << "             ||||@|||||" << endl;
cout << "            |@||||||||@|" << endl;
cout << "           ||||@||||@||||" << endl;
cout << "          @||||||||||||||@" << endl;
cout << "         ||||@||||||||@||||" << endl;
cout << "        ||@|||||||@|||||||@||" << endl;
cout << "       | |||||@||||||||@|||| |" << endl;  
cout << "        |||@|||||||@|||||||@|" << endl;
cout << "       ||||||||@||||||||@|||||" << endl;
cout << "      @|||||@||||||@||||||||||@" << endl;
cout << "     ||||@|||||@||||||@|||||@|||" << endl;
cout << "    |||||||||||||||||||||||||||||" << endl;
cout << "   @|||@|||@||||||@|||||||@|||@||@" << endl;
cout << "                !!!!!" << endl;
cout << " ____%____      !!!!!" << endl;
cout << " |       |      !!!!!" << endl;
cout << " |       |      !!!!!   ____%*%_____  " << endl;
cout << " |       |      !!!!!  |            |" << endl;
cout << " |_______|      !!!!!  |_________ __|" << endl;

   
}
