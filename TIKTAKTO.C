#include <stdio.h>
#include <conio.h>

int main()
{
    int a[3][3];
    int i, j;
    int choice;
    int player = 1;
    int win = 0;
    int valid;
    for(i = 0; i < 3; i++)
    {
	for(j = 0; j < 3; j++)
	{
	    a[i][j] = 0;
	}
    }

    for(i = 1; i <= 9; i++)
    {
	clrscr();

	printf("\n");
	printf(" %d | %d | %d\n", a[0][0], a[0][1], a[0][2]);
	printf("---|---|---\n");
	printf(" %d | %d | %d\n", a[1][0], a[1][1], a[1][2]);
	printf("---|---|---\n");
	printf(" %d | %d | %d\n", a[2][0], a[2][1], a[2][2]);

	printf("\nPlayer %d enter position: ", player);
	scanf("%d", &choice);

	valid = 1;

	if(choice == 1)
	{
	    if(a[0][0] == 0)
		a[0][0] = player;
	    else
		valid = 0;
	}
	else if(choice == 2)
	{
	    if(a[0][1] == 0)
		a[0][1] = player;
	    else
		valid = 0;
	}
	else if(choice == 3)
	{
	    if(a[0][2] == 0)
		a[0][2] = player;
	    else
		valid = 0;
	}
	else if(choice == 4)
	{
	    if(a[1][0] == 0)
		a[1][0] = player;
	    else
		valid = 0;
	}
	else if(choice == 5)
	{
	    if(a[1][1] == 0)
		a[1][1] = player;
	    else
		valid = 0;
	}
	else if(choice == 6)
	{
	    if(a[1][2] == 0)
		a[1][2] = player;
	    else
		valid = 0;
	}
	else if(choice == 7)
	{
	    if(a[2][0] == 0)
		a[2][0] = player;
	    else
		valid = 0;
	}
	else if(choice == 8)
	{
	    if(a[2][1] == 0)
		a[2][1] = player;
	    else
		valid = 0;
	}
	else if(choice == 9)
	{
	    if(a[2][2] == 0)
		a[2][2] = player;
	    else
		valid = 0;
	}
	else
	{
	    valid = 0;
	}

	if(valid == 0)
	{
	    printf("\nWrong position!");
	    i--;
	    getch();
	}
	else
	{
	    /* Check winner after 5 moves */

	    if(i >= 5)
	    {
		if((a[0][0] == player &&
		    a[0][1] == player &&
		    a[0][2] == player) ||

		   (a[1][0] == player &&
		    a[1][1] == player &&
		    a[1][2] == player) ||

		   (a[2][0] == player &&
		    a[2][1] == player &&
		    a[2][2] == player) ||

		   (a[0][0] == player &&
		    a[1][0] == player &&
		    a[2][0] == player) ||

		   (a[0][1] == player &&
		    a[1][1] == player &&
		    a[2][1] == player) ||

		   (a[0][2] == player &&
		    a[1][2] == player &&
		    a[2][2] == player) ||

		   (a[0][0] == player &&
		    a[1][1] == player &&
		    a[2][2] == player) ||

		   (a[0][2] == player &&
		    a[1][1] == player &&
		    a[2][0] == player))
		{
		    win = 1;
		}
	    }

	    if(win == 1)
	    {
		printf("\n\nPlayer %d Wins!", player);
		getch();
	    }

	    /* Change player */

	    if(player == 1)
		player = 2;
	    else
		player = 1;
	}
    }

    printf("\n\nGame Draw!");

    getch();

}
