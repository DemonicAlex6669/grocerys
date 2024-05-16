#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main (void)
{
char *arr[68] = {"orange", "banana", "cantalope", "lettus", "green onion", "yellow onion", "potato", "carrot", "cutcumber", "ground beef", "chicken", "beef", "steak", "fresh burger", "50\% deli", "hotdog", "sasage", "sasage patty", "bacon", "ham", "biscut", "egg", "sour cream", "cottage chease", "orange juice", "butter", "cheese", "fake cheese", "frozen chicken", "frozen burger", "yogert", "frozen meal", "frozen sasage", "hashbrown patty", "hash brown", "ice cream", "creamer", "chip", "cookie", "pancake", "surup", "flower", "sugar", "penut butter", "jelly", "bread", "hotdog bun", "burger bun", "outdoor bun", "english muffin", "pasta", "pasta sauce", "tuna", "mac", "chilli", "beans", "pickles", "olive", "ketchupt", "mustard", "bbq", "ranch", "papertowel", "toilet paper", "dawn", "paper plate", "body soap", "shampoo"};
int arrleng = sizeof arr/ sizeof arr[0];


	FILE *fpt = fopen("groceries.txt", "a");
		if (fpt == NULL)
		{
		printf("failed to make file");
		return 1;
		}
		for (int i = 0; i < arrleng; i++)
		{
		char yn[2] = "n";

		printf("%s", arr[i]);

		printf(": ");

		scanf("%s*", yn);

			if (strcmp(yn, "y") == 0)
			{
			fprintf(fpt, "%s \n", arr[i]);
			}
		}
	fclose(fpt);
}
