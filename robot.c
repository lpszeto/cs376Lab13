/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
<<<<<<< HEAD
 * @author Tanya L. Crenshaw, Nathan Schmedake, Lilian Szeto
=======
 * @author Tanya L. Crenshaw, Nathan Schmedake, Vandan Bhargava
>>>>>>> 7484c5dfb756370c96e110b21620746c89490fd6
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robotPrintMessage
 *
 * This function prints the message, "I really love robots!"
 *
 * @returns none 
 */
void robotPrintMessage(void)
{
  printf("\n\nI really love robots!\n\n");
  return;
}

/**
 * robotPrintAscii
 *
 */
void robotPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "UWR: Unidentified Wheeled Robot\n"
	 "%s    i_i    \n"
	 "%s   [O_O]   \n"
	 "%s  /|___|\\ \n"
	 "%s   d   b   \n",blank, blank, blank, blank);

  blank = blank - 10;
}

/**
 * dalekPrintAscii
 *
 */
void dalekPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "I am Dalek, from Dr. Who\n"
	 "%s      <----->      \n" 
<<<<<<< HEAD
         "%s     <  (0)  >     \n"        
         "%s      |     |     \n"
=======
         "%s     <  (@)  >     \n"        
         "%s     |       |     \n"
>>>>>>> 7484c5dfb756370c96e110b21620746c89490fd6
         "%s    < ------- >    \n"
         "%s    o         o    \n"
         "%s    o  0  ()  o    \n"
	 "%s   o           o   \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n", blank, blank, blank, blank, blank, blank, 
	 blank, blank, blank, blank);
  blank = blank - 10;
}
