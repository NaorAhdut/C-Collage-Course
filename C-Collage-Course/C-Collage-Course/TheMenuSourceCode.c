#include <stdio.h>
#include <math.h>
#include <string.h> 
#include <stdlib.h>



int main()
{
	const int numberOfusers = 3;
	char *users[3][2] = { { "", "" }, { "", "" }, { "Naor", "123456" } };
	int isValid = login(numberOfusers, users);
	if (isValid == 1) 
	{
		menu();
	}
	else
	{
		createUser(users, numberOfusers);
	}
	return 0;
}

void createUser(char *users, int numberOfusers)
{
	int i;
	for (i = 0; i < numberOfusers; i++)
	{

	}

}


int login(int numberOfusers , char users[][2])
{
	printf("Are You A Memeber Of BlackPaper? ( Yes / No )\n");
	char userExist[3]; // Keep 3 Latters for an Answer From the user
	scanf("%s", userExist); // Put 3 latters 
	if (strcmp(userExist, "Yes") == 0) // if userExist and "Yes" are the same the strcmp() will return 0 and will run the rest that will return 1 to the main function.
	{
		char userName, password;
		printf("Enter Your UserName : \n");
		scanf("%s", userName);
		printf("Enter Your Password : \n");
		scanf("%s", password);
		int i;
		for (i = 0; i < numberOfusers; i++)
		{
			if (strcmp(users[i][0] , "") == 0 ) // if userName is empty the strcmp will return 0 and will enter the if . else continue .
			{
				users[i][0] = userName;  
				printf("Your Configures User is : %s ", users[i][0]);
				users[i][1] = password;
				printf("Your Configures password is : %s ", users[i][1]);
			}
		}
		
		return 1;
	}
	else
	{
		return 0;
	}
}

int menu()
{
	const int CHIPS = 10, STEAK = 60, SALAD = 15, TUNA = 50, SALMON = 70, NUM_OF_DISHES = 5;
	char *theMenu[5] = { "TUNA" , "CHIPS" , "SALMON" , "STEAK" , "SALAD" };
	int userChoose;
	int userSavedDishes[5];
	int i;
	
	for (i = 0; i < NUM_OF_DISHES; i++)
	{
		userSavedDishes[i] = 0;
	}

	while (1)
	{
		printf("Please Choose The Dishes:\n");
		printf("1.TUNA, 2.CHIPS , 3.SALMON , 4.STEAK , 5.SALAD\n");
		scanf("%d", &userChoose);
		if (userChoose < 0 || NUM_OF_DISHES < userChoose)
		{
			continue;
		}
		userSavedDishes[userChoose - 1] += 1;

		printf("Your Orders Sire:\n");
		for (i = 0; i < NUM_OF_DISHES; i++)
		{
			if (userSavedDishes != 0)
			{
				printf("%d - %s, ", userSavedDishes[i], theMenu[i]);
			}
		}
		char anotherDishYesNo[3];
		printf("\nWould You Like Another Dish ? (Yes / No )\n");
		scanf("%s", anotherDishYesNo);
		if (strcmp(anotherDishYesNo, "Yes") == 0)
		{
			continue;
		}
		break;
	}
	return userSavedDishes;
}