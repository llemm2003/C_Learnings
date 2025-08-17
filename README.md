# C_Learnings
My learnings in C

Anything I learned in C. I will put it here. For my own sanity.

Compiling/Compiler:
gcc
clang
cc

Compiling a code:
<compiler> source.c
ex:
cc source.c

another way:
cc source.c -o source.out 
The source.out will be the executable name, not a.out

Advanced Compiling:
gcc -O -Wall -pedantic -ansi -std=c99 -o source source.c

Derivatives:
/* standard library*/
#include <stdio.h>
// Anything that requires time
#include <time.h>

Functions:

User Function:

Main Function:
int main(void) {
	statements;
	return 0;
}

Commenting:

/* */

or for multi-line

/* 
*/

or C99 

//


Variable datatype declaration:
Variable starts with numbers or letters only.
Each variable declaration can be multiple names separated but with semicolon(;) at the end.
Can be declared when needed(c99). But Previous version declares the variable at the start. 
int => integers
long => long integers
float => numbers with decimal. Can store more numbers than int but slower arithmetics.

int variable1, variable2, variableN;
float variable1, variable2,variableN;

Right associative:

1 = j = k = 0;
or
i = ( j = ( k = 0));

Constant Variable:
const int variable_name=123;

Macro Variable:

#define MACRO_VARIABLE 123

Printing:

printf ("strings %


Loop:
A loop has two expression:
	Controlling expression => while (i < n)
	Loop body	=> Statements;
C has three loops
1. while
2. do
3. for

While loop is for evaluate the expression before performing the statement.

do loop is perform the statement before evaluate the expression.

for loop is for predefined number of executing a statement or anything that count up or count down.

for loop structure:

	for (i=0; i<n; i++){}
 	#This means that the loop will happen as long as i is smaller/less than n.




