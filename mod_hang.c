//Definition:
#include<stdio.h>
#include<string.h>
main()
{
	int i=0, j=5, choice, n[6];
	char hman[8] = {'J', 'B', 'T', 'K', 'H', 'J', 'N', '\0'}, ec1[7], ec2[7], ec3[7], ec4[7], ec5[7], ec6[7];
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
	printf("4. Exit\n\n");
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
	
	printf("\nHere is The Movie Name. You Have 6 Chances to guess it.");
	printf("\n%c %c %c / %c %c %c / %c %c %c / %c %c %c %c\n", a, b, a, a, b, a, a, b, d, a, b, b, a);
	printf("%c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c\n", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
	printf("1   2  3    4   5       6     7\n");
	
	again:
		//if(n[0] > 7)
			//goto x;
	printf("Enter on which number you want to input character:\n");
	scanf("%d", &n[0]);
	
	switch(n[0])
	{
		case 1:goto first;
				break;
		case 2:goto second;
				break;
		case 3:goto third;
				break;
		case 4:goto fourth;
				break;	
		case 5:goto fifth;
				break;
		case 6:goto sixth;
				break;			
	}
	
	
	first:
	
	
	if(n[0] <7)
	{
		if(n[0]==1)
		{
		printf("Enter character on 1");
		scanf("%c ", &ec1[0]);
		if(ec1[0] == hman[0])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("\n\nWrong Character! You have 5 chances left.\n\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t		    |\n");
				printf("\t		    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
		}
	
		if(n[0]==2)
		{
		printf("Enter character on 2");
		scanf("%c ", &ec1[1]);
		if(ec1[1] == hman[1])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("\n\nWrong Character! You have 5 chances left.\n\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t		    |\n");
				printf("\t		    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
		}
	
		if(n[0]==3)
		{
		printf("Enter character on 3");
		scanf("%c ", &ec1[2]);
		if(ec1[2] == hman[2])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("\n\nWrong Character! You have 5 chances left.\n\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t		    |\n");
				printf("\t		    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}	
		}
	
		if(n[0]==4)
		{
		printf("Enter character on 4");
		scanf("%c ", &ec1[3]);
		if(ec1[3] == hman[3])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("\n\nWrong Character! You have 5 chances left.\n\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t		    |\n");
				printf("\t		    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
		}
	
		if(n[0]==5)
		{
		printf("Enter character on 5");
		scanf("%c ", &ec1[4]);
		if(ec1[4] == hman[4])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("\n\nWrong Character! You have 5 chances left.\n\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t		    |\n");
				printf("\t		    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}	
		}
	
		if(n[0]==6)
		{
		printf("Enter character on 6");
		scanf("%c ", &ec1[5]);
		if(ec1[5] = hman[5])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("\n\nWrong Character! You have 5 chances left.\n\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t		    |\n");
				printf("\t		    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
		}
	}
	
	second:

	
	if(n[1] < 7)
	{
	
	if(n[1]==1)
	{
		printf("Enter character on 1");
		scanf("%c ", &ec2[0]);
		if(ec2[0] = hman[0])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 4 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t		    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	if(n[1]==2)
	{
		printf("Enter character on 2");
		scanf("%c ", &ec2[1]);
		if(ec2[1] = hman[1])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 4 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t		    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	if(n[1]==3)
	{
		printf("Enter character on 3");
		scanf("%c ", &ec2[2]);
		if(ec2[2] = hman[2])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 4 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t		    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}	
	}
	
	if(n[1]==4)
	{
		printf("Enter character on 4");
		scanf("%c ", &ec2[3]);
		if(ec2[3] = hman[3])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 4 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t		    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	if(n[1]==5)
	{
		printf("Enter character on 5");
		scanf("%c ", &ec2[4]);
		if(ec2[4] = hman[4])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 4 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t		    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}	
	}
	
	if(n[1]==6)
	{
		printf("Enter character on 6");
		scanf("%c ", &ec2[5]);
		if(ec2[5] = hman[5])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 4 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t		    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	}
	
	third:
	
	if(n[2]==1)
	{
		printf("Enter character on 1");
		scanf("%c ", &ec3[0]);
		if(ec3[0] = hman[0])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 3 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t	/	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	if(n[2]==2)
	{
		printf("Enter character on 2");
		scanf("%c ", &ec3[1]);
		if(ec3[1] = hman[1])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 3 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t	/	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	if(n[2]==3)
	{
		printf("Enter character on 3");
		scanf("%c ", &ec3[2]);
		if(ec3[2] = hman[2])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 3 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t	/	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}	
	}
	
	if(n[2]==4)
	{
		printf("Enter character on 4");
		scanf("%c ", &ec3[3]);
		if(ec3[3] = hman[3])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 3 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t	/	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	if(n[2]==5)
	{
		printf("Enter character on 5");
		scanf("%c ", &ec3[4]);
		if(ec3[4] = hman[4])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 3 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t	/	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}	
	}
	
	if(n[2]==6)
	{
		printf("Enter character on 6");
		scanf("%c ", &ec3[5]);
		if(ec3[5] = hman[5])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 3 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t	/	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	fourth:

	
	if(n[3]==1)
	{
		printf("Enter character on 1");
		scanf("%c ", &ec4[0]);
		if(ec4[0] = hman[0])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 2 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t	/ \\	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	if(n[3]==2)
	{
		printf("Enter character on 2");
		scanf("%c ", &ec4[1]);
		if(ec4[1] = hman[1])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 2 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t	/ \\	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	if(n[3]==3)
	{
		printf("Enter character on 3");
		scanf("%c ", &ec4[2]);
		if(ec4[2] = hman[2])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 2 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t	/ \\	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}	
	}
	
	if(n[3]==4)
	{
		printf("Enter character on 4");
		scanf("%c ", &ec4[3]);
		if(ec4[3] = hman[3])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 2 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t	/ \\	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	if(n[3]==5)
	{
		printf("Enter character on 5");
		scanf("%c ", &ec4[4]);
		if(ec4[4] = hman[4])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 2 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t	/ \\	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}	
	}
	
	if(n[3]==6)
	{
		printf("Enter character on 6");
		scanf("%c ", &ec4[5]);
		if(ec4[5] = hman[5])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 2 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |	    |\n");
				printf("\t	/ \\	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	fifth:

	
	if(n[4]==1)
	{
		printf("Enter character on 1");
		scanf("%c ", &ec5[0]);
		if(ec5[0] = hman[0])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 1 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |\\	    |\n");
				printf("\t	/ \\	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	if(n[4]==2)
	{
		printf("Enter character on 2");
		scanf("%c ", &ec5[1]);
		if(ec5[1] = hman[1])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 1 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |\\	    |\n");
				printf("\t	/ \\	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	if(n[4]==3)
	{
		printf("Enter character on 3");
		scanf("%c ", &ec5[2]);
		if(ec5[2] = hman[2])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 1 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |\\	    |\n");
				printf("\t	/ \\	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}	
	}
	
	if(n[4]==4)
	{
		printf("Enter character on 4");
		scanf("%c ", &ec5[3]);
		if(ec5[3] = hman[3])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 1 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |\\	    |\n");
				printf("\t	/ \\	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	if(n[4]==5)
	{
		printf("Enter character on 5");
		scanf("%c ", &ec5[4]);
		if(ec5[4] = hman[4])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 1 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |\\	    |\n");
				printf("\t	/ \\	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}	
	}
	
	if(n[4]==6)
	{
		printf("Enter character on 6");
		scanf("%c ", &ec5[5]);
		if(ec5[5] = hman[5])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
				printf("Wrong Character! You have 1 chances left.\n");
				printf("\t        ============|\n");
				printf("\t	 |          |\n");
				printf("\t	 |          |\n");
				printf("\t	 O          |\n");
				printf("\t	 |\\	    |\n");
				printf("\t	/ \\	    |\n");
				printf("			    |\n");
				printf("        	===================\n");
		}
	}
	
	sixth:
	
	if(n[5]==1)
	{
		printf("Enter character on 1");
		scanf("%c ", &ec6[0]);
		if(ec6[0] = hman[0])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
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
	
	if(n[5]==2)
	{
		printf("Enter character on 2");
		scanf("%c ", &ec6[1]);
		if(ec6[1] = hman[1])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
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
	
	if(n[5]==3)
	{
		printf("Enter character on 3");
		scanf("%c ", &ec6[2]);
		if(ec6[2] = hman[2])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
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
	
	if(n[5]==4)
	{
		printf("Enter character on 4");
		scanf("%c ", &ec6[3]);
		if(ec6[3] = hman[3])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
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
	
	if(n[5]==5)
	{
		printf("Enter character on 5");
		scanf("%c ", &ec6[4]);
		if(ec6[4] = hman[4])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
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
	
	if(n[5]==6)
	{
		printf("Enter character on 6");
		scanf("%c ", &ec6[5]);
		if(ec6[5] = hman[5])
		{
			printf("Right Character. Enter a new one.\n");
		}
		else
		{
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
	goto again;
	//x:
		//printf("Goodbye.");
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
