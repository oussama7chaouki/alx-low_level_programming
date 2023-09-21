#include "lists.h"

/**
 * myStartupFun - Apply the constructor attribute to executed before main()
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - implementation of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
