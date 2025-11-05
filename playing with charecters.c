#include<stdio.h>
int main()
{
	char ch;
	char str[20];
	char sentance[100];
	printf("Enter a charecter:");
	scanf("%c",&ch);
	printf("you entered:%c\n",ch);
	getchar();
	printf("Enter a string:");
	fgets(str,sizeof(str), stdin);
	str[strcspn(str,"\n")] = 0;  
	printf("you entred:%s\n",str);
	printf("Enter a sentence:");
	fgets(sentance, sizeof(sentance),stdin);
	sentance[strcspn(sentance,"\n")] = 0;
	printf("you entered: %s\n",sentance);
	return 0;
}
