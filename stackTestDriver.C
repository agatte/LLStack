/*------------------------------------------------------------------
A test driver for the stack/bucket class.

Written by Mikeyg
------------------------------------------------------------------*/

#include <iostream>
#include "LLStacks.h"

using namespace std;

enum EntryCode {POP, PUSH, COUNT, TOP, PRINT, QUIT};


int main () {
  // Declare some useful variables
  int response;
  bool flag;
  int newValue, returnValue;

  // Instantiate/construct a bucket object
  Stack slop;
  
  // Get the user's intention
  cout << "\nEnter 0: withdraw(pop)\n 1: deposit(push)\n 2: stack load(numberOfItems)\n 3: top\n 4: print stack\n enter code: ";
  cin >> response;
  while ((response >= POP) && (response <= PRINT)) {
    switch (response) {
    case POP:
      flag = slop.Pop(returnValue);
      if (flag) {
		  cout << "\nThe popped element is: :" << returnValue;
      } else {
		  cout << "\nThe stack is emtpy";
      }
      break;
    case PUSH:
      cout << "\nEnter the value to be placed in the stack: ";
      cin >>newValue;
      slop.Push(newValue);
      break;
    case COUNT:
      cout << "\nThere are " << slop.NumOfStackEntries() << " items in the stack";
      break;
    case TOP:
      flag = slop.Top(returnValue);
      if (flag) {
		  cout << "\nThe stack contains " << returnValue << " at top position";
      } else {
		  cout << "\nThe stack is empty";
      break;
	case PRINT:
	  cout << endl << slop << endl;
	  break;
      }
    }

    // Get the user's intention
    cout << "\n\n\nEnter 0: withdraw(pop)\n 1: deposit(push)\n 2: stack load(numberOfItems\n 3: top\n 4: print stack\n enter code: ";
    cin >> response;
  }
  
  cout << endl << endl;
  return(0);
}
