//Definition:
#include<stdio.h>
#include<string.h>
main()
{
	int i, j, choice, n;
	char hman[8] = {'J', 'B', 'T', 'K', 'H', 'J', 'N', '\0'}, ec[6];
	/*hman[0] = 74;	//J
	hman[1] = 'B';	//B
	hman[2] = 74;	//T
	hman[3] = 74;	//K
	hman[4] = 74;	//H
	hman[5] = 74;	//J
	hman[6] = 74;	//N*/
	char name[20];
	char a=45, b=65, c=69, d=73, e=79, f=85;
	printf("--------------HANGMAN--------------\n");
	printf("\n");
	printf("Enter Your Name  :  ");
	gets(name);
	printf("\n");
	printf("Menu\n");
	printf("1. Play !\n");
	printf("2. How to Play\n");
	printf("3. Rules\n");
	printf("3. Exit\n\n");
	printf("Enter Choice:");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:printf("Let's Begin %s\n", name);
				break;
		case 2:printf("Help\n");
				break;
		case 3:printf("Rules\n");
				break;
		case 4:printf("Exit\nThank You For Playing.");
				break;						
	}
	
	printf("\n%c %c %c / %c %c %c / %c %c %c / %c %c %c %c\n", a, b, a, a, b, a, a, b, d, a, b, b, a);
	printf("1   2  3    4  5    6   7     8\n");
	
	printf("Enter the number where you want to enter  :  \n");
	scanf("%d", &n);
	printf("Enter character at %d\n", n);
	
	switch(n)
	{
		case 1: printf("Enter Character  :  ");
				scanf("%c ", &ec[0]);
				
				if(hman[0] == ec[0])
					printf("Right Character! Enter a character in a new place.\n");
				else
					printf("Wrong Character! You have 5 chances left.\n\n");
					printf("\t        ============|\n");
					printf("\t	 |          |\n");
					printf("\t	 |          |\n");
					printf("\t	 O          |\n");
					printf("\t		    |\n");
					printf("\t		    |\n");
					printf("			    |\n");
					printf("        	===================\n");
		
		case 2:	printf("Enter Character  :  ");
				scanf("%c ", &ec[1]);
				
				if(hman[1] == ec[1])
					printf("Right Character! Enter a character in a new place.\n");
					
				else
					printf("Wrong Character! You have 4 chances left.\n");
					printf("\t        ============|\n");
					printf("\t	 |          |\n");
					printf("\t	 |          |\n");
					printf("\t	 O          |\n");
					printf("\t	 |	    |\n");
					printf("\t		    |\n");
					printf("			    |\n");
					printf("        	===================\n");
				
		
		case 3:	printf("Enter Character  :  ");
				scanf("%c ", &ec[2]);
				
				if(hman[2] == ec[2])
					printf("Right Character! Enter a character in a new place.\n");
					
				else
					printf("Wrong Character! You have 3 chances left.\n");
					printf("\t        ============|\n");
					printf("\t	 |          |\n");
					printf("\t	 |          |\n");
					printf("\t	 O          |\n");
					printf("\t	 |	    |\n");
					printf("\t	/	    |\n");
					printf("			    |\n");
					printf("        	===================\n");
				
		
		case 4:	printf("Enter Character  :  ");
				scanf("%c ", &ec[3]);
				
				if(hman[3] == ec[3])
					printf("Right Character! Enter a character in a new place.\n");
					
				else
					printf("Wrong Character! You have 2 chances left.\n");
					printf("\t        ============|\n");
					printf("\t	 |          |\n");
					printf("\t	 |          |\n");
					printf("\t	 O          |\n");
					printf("\t	 |	    |\n");
					printf("\t	/ \\	    |\n");
					printf("			    |\n");
					printf("        	===================\n");
						
					
		case 5:	printf("Enter Character  :  ");
				scanf("%c ", &ec[4]);
				
				if(hman[4] == ec[4])
					printf("Right Character! Enter a character in a new place.\n");
				//goto cont;	
				else
					printf("Wrong Character! You have 1 chances left.\n");
					printf("\t        ============|\n");
					printf("\t	 |          |\n");
					printf("\t	 |          |\n");
					printf("\t	 O          |\n");
					printf("\t	 |\\	    |\n");
					printf("\t	/ \\	    |\n");
					printf("			    |\n");
					printf("        	===================\n");
		
		case 6:	printf("Enter Character  :  ");
				scanf("%c ", &ec[5]);
				
				if(hman[5] == ec[5])
					printf("Right Character! Enter a character in a new place.\n");
					
				else
					printf("\t        ============|\n");
					printf("\t	 |          |\n");
					printf("\t	 |          |\n");
					printf("\t	 O          |\n");
					printf("\t	/|\\	    |\n");
					printf("\t	/ \\	    |\n");
					printf("			    |\n");
					printf("        	===================\n");
					printf("Game Over\n");																		
	}
	
	
	
	
}
