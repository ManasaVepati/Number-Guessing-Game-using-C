#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{	int Number,Guess,nguesses;
	srand(time(0));
	Number=rand()%100+1;
	do
	{
		printf("Guess the number between 1 to 100\n");
		scanf("%d",&Guess);
		if(Guess>Number)
	{
		printf("lower number please\n");
	}
	else if(Guess<Number)
	{
	printf("greater number please\n");
	}
	else{
	printf("Yayy you got it! ",nguesses);
	nguesses++;
    }
}
while(Number!=Guess);
return 0;
}
