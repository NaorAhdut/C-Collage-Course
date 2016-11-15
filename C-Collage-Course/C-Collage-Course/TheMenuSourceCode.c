#include <stdio.h>
#include <math.h>
#include <string.h> 



int main()
{
	const int CHIPS = 10, STEAK = 60, SALAD = 15, TUNA = 50, SALMON = 70;
	char *theMenu[5] = { "TUNA" , "CHIPS" , "SALMON" , "STEAK" , "SALAD" };
	int userChoose;
	int userSavedDishes[5];
	int i;
	for (i = 0; i < sizeof(userSavedDishes); i++)
	{
		userSavedDishes[i] = 0;
	}

	while (1)
	{
		printf("Please Choose The Dishes:\n");
		printf("1.TUNA, 2.CHIPS , 3.SALMON , 4.STEAK , 5.SALAD\n");
		scanf("%d", &userChoose);
		if (userChoose < 0 || sizeof(userSavedDishes) < userChoose)
		{
			continue;
		}
		userSavedDishes[userChoose - 1] += 1;

		printf("Your Orders Sire:");
		for (
			i = 0; i < sizeof(userSavedDishes); i++)
		{
			if (userSavedDishes != 0)
			{
				printf("%d - %s, ", userSavedDishes[i], theMenu[i]);
			}
		}
		char anotherDishYesNo[] = "No";
		printf("Would You Like Another Dish ? (Yes / No )");
		scanf("%s", anotherDishYesNo);
		if (strcmp(anotherDishYesNo, "Yes") == 0)
		{
			continue;
		}
		break;
	}


	return 0;
}