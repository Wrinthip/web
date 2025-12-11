#include<stdio.h>
#include<conio.h>
 void count (void) ;
 int main ()
 {
 	printf("press only character : press 'z' to exin\n");
 	 while (getch() != 'z')
 	    count();
 	printf("You press 'z' Then End routine\n");
    return 0;
 }
 void count(void)
 {
 	static int round = 0;
 	round++ ;
 	printf("Function count is called %d times\n", round);
 }
