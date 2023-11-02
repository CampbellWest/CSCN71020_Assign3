#include <stdio.h>
#include <string.h>

#define OPTIONS 3

int main()
{

	return 0;
}

char* RockPaperScissors(char* Player1, char* Player2)
{
	char* options[OPTIONS] = { "Rock", "Paper", "Scissors" };
	int invalid = 2;

	for (int i = 0; i < OPTIONS; i++)
	{
		if (strcmp(Player1, options[i]) == 0)
		{
			break;
		}
		if (i == invalid)
		{
			return "Invalid";
		}
	}

	for (int j = 0; j < OPTIONS; j++)
	{
		if (strcmp(Player2, options[j]) == 0)
		{
			break;
		}
		if (j == invalid)
		{
			return "Invalid";
		}
	}

	if (strcmp(Player1, Player2) == 0)
	{
		return "Draw";
	}

	if (strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Scissors") == 0 ||
		strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Paper") == 0 ||
		strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Rock") == 0)
	{
		return "Player1";
	}
	else
	{
		return "Player2";
	}
}