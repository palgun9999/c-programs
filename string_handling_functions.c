#include<stdio.h>
int main()
{
	char r[30],r1[10],r2[10],r3[10];
	int opt,i=0,j,len=0;
	printf("Enter any option\n");
	printf("1:Find out length of the string\n");
	printf("2: Concatenate of the two strings\n");
	printf("3: Reverse of the string\n");
	printf("4: Copy of the string\n");
	printf("Enter the choise");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
			{
				printf("Enter the string\n");
				gets(r);
				printf("%d",strlen(r));
					break;
			}
		case 2:
		{
			printf("String Concatenbtaion \n");
			printf("\nEnter the First String:");
			scanf("%[^\n]s",r1);
			printf("\nEnter Second string\n");
			gets(r2);
			strcat(r1,r2);
			printf("The concatenated string is: %s\n",r1);
			break;
		}
		case 3:
			{
				printf("Reverse of a string");
				printf("Enter the string:");
				gets(r1);
				puts(strrev(r1));
				break;
			}
		case 4:
			{
				printf("String Copying");
				printf("Enter 1st string:");
				gets(r2);
				strcpy(r1,r2);
				puts(r1);
				break;
			}
		default:
			{
				printf("option is in valid.....");
			}
	}
}