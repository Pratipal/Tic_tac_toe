#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void prinarr();
void tictactoe();
void u1();
void u2();
void computer();
void help();
void credits();
void initializinganddefaultscreen();
int winner();
int i,j,k,l,m=0,count=0,Temp,ch=0;
time_t t;
char a[3][3], b[3][3];
void main()
{
	srand((unsigned) time(&t));
	clrscr();
	printf("	1: PLAYER VS PLAYER\n");
	printf("	2: PLAYER VS COMPUTER\n");
	printf("	3: Help!\n");
	printf("	4: CREDITS\n");
	printf("	Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		 initializinganddefaultscreen();
		 tictactoe();
		 break;
	case 2:
		 initializinganddefaultscreen();
		 tictactoe();
		 break;
	case 3:
		help();
		break;
	case 4:
		credits();
		break;
	default:
		printf("Enter proper choice: ");
		break;
	}
       //	tictactoe();
	getch();
}
void tictactoe()
{
	for(m=0;m<9;m++)
	{
		if(ch==1)
		{
			if(count==0)
			{
				u1();
			}
			else
			{
				u2();
			}
		}
		else if(ch==2)
		{
			if(count==0)
			{
				u1();
			 //	count++;
			}
			else
			{
				computer();
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i==k&&j==l)
				{
					if(a[i][j]=='\0')
					{
						a[i][j]=b[k][l];
						prinarr();
						Temp=winner();
						if(Temp==1)
						{
							m=11;
						}
					}
					else
					{
						m--;
						if(ch==1)
						{
						       if(count==1)
						       {
								printf("Wrong Input\n");
								count--;
							}
							else if(count==0)
							{
								count++;
								printf("Wrong Input\n");
							}
						}
						else if(ch==2)
						{
							if(count==0)
							{
								count=count+2;
							}
							else if(count==2)
							{
								count=count-2;
								printf("Wrong input\n");
							}
						}
					}
				}
			}
		}
	}
	if(m==9)
	{
		printf("Draw");
	}
}
void prinarr()
{
	clrscr();
	printf("\n\n\n\n\n\n\n\n\n\n");
	for(i=0;i<3;i++)
	{
		printf("\t\t\t\t");
		for(j=0;j<3;j++)
		{
			if(a[i][j]=='X'||a[i][j]=='O'||a[i][j]=='C')
			{
				printf("%c \t",a[i][j]);
			}
			else
			{
				printf("- \t");
			}
		}
		printf("\n");
	}
}
void u1()
{
	int pos;
	printf("User 1's turn: \n");
	scanf("%d",&pos);
	if(pos==1)
	{
		k=0;
		l=0;
		b[k][l]='X';
	}
	else if(pos==2)
	{
		k=0;
		l=1;
		b[k][l]='X';
	}
	else if(pos==3)
	{
		k=0;
		l=2;
		b[k][l]='X';
	}
	else if(pos==4)
	{
		k=1;
		l=0;
		b[k][l]='X';
	}
	else if(pos==5)
	{
		k=1;
		l=1;
		b[k][l]='X';
	}
	else if(pos==6)
	{
		k=1;
		l=2;
		b[k][l]='X';
	}
	else if(pos==7)
	{
		k=2;
		l=0;
		b[k][l]='X';
	}
	else if(pos==8)
	{
		k=2;
		l=1;
		b[k][l]='X';
	}
	else if(pos==9)
	{
		k=2;
		l=2;
		b[k][l]='X';
	}
	if(pos==0)
	{
		exit(0);
	}
	else if(pos>9)
	{
		count--;
		m--;
		printf("Wrong input\n");
	}
	count++;
	if(ch==2)
	{
		count++;
	}


}
void u2()
{
	int pos;
	printf("User 2's turn: \n");
	scanf("%d",&pos);
	if(pos==1)
	{
		k=0;
		l=0;
		b[k][l]='O';
	}
	else if(pos==2)
	{
		k=0;
		l=1;
		b[k][l]='O';
	}
	else if(pos==3)
	{
		k=0;
		l=2;
		b[k][l]='O';
	}
	else if(pos==4)
	{
		k=1;
		l=0;
		b[k][l]='O';
	}
	else if(pos==5)
	{
		k=1;
		l=1;
		b[k][l]='O';
	}
	else if(pos==6)
	{
		k=1;
		l=2;
		b[k][l]='O';
	}
	else if(pos==7)
	{
		k=2;
		l=0;
		b[k][l]='O';
	}
	else if(pos==8)
	{
		k=2;
		l=1;
		b[k][l]='O';
	}
	else if(pos==9)
	{
		k=2;
		l=2;
		b[k][l]='O';
	}
	if(pos==0)
	{
		exit(0);
	}
	else if(pos>9)
	{
		count++;
		m--;
		printf("Wrong input\n");
	}
	count--;
}
int winner()
{
	if(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X'||a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X'||a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X'||a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X'||a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X'||a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X'||a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X'||a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')
	{
		printf("CONGRATULATIONS USER 1 HAS WON!\n");
		return 1;
	}
	else if(a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O'||a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O'||a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O'||a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O'||a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O'||a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O'||a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O'||a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O')
	{
		printf("CONGRATULATIONS USER 2 HAS WON!\n");
		return 1;
	}
	else if(a[0][0]=='C'&&a[0][1]=='C'&&a[0][2]=='C'||a[0][0]=='C'&&a[1][0]=='C'&&a[2][0]=='C'||a[0][0]=='C'&&a[1][1]=='C'&&a[2][2]=='C'||a[0][1]=='C'&&a[1][1]=='C'&&a[2][1]=='C'||a[0][2]=='C'&&a[1][2]=='C'&&a[2][2]=='C'||a[1][0]=='C'&&a[1][1]=='C'&&a[1][2]=='C'||a[0][2]=='C'&&a[1][1]=='C'&&a[2][0]=='C'||a[2][0]=='C'&&a[2][1]=='C'&&a[2][2]=='C')
	{
		printf("Opps you lost this time!\n Better luck next time");
		return 1;
	}
       return 0;

}
void computer()
{
	k=rand()%3;
	l=rand()%3;
	b[k][l]='C';
	count=count-2;
}
void initializinganddefaultscreen()
{
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]='\0';
			b[k][l]='\0';
		}
	}
	printf("\n\n\n\n\n\n\n\n\n\n");
	for(i=0;i<3;i++)
	{
		printf("\t\t\t\t");
		for(j=0;j<3;j++)
		{
			printf("- \t");
		}
		printf("\n");
	}
}
void help()
{
	int k=1;
	clrscr();
	printf("Press any number to enter your Sign there:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",k);
			k++;
		}
		printf("\n");
	}
	printf("For example:\nBy pressing 1 your X(if player 1's turn or O) will be placed at 1's position.");
	printf("\nX\t2\t3");
	printf("\n4\t5\t6");
	printf("\n7\t8\t9");
	printf("\n Same goes with other numbers(common sense)");
}
void credits()
{
	clrscr();
	printf("****************************************\n");
	printf("***************CREATED BY***************\n");
	printf("****************************************\n");
	printf("***********PRATIPALSINH JADEJA**********\n");
	printf("****************************************\n");
}