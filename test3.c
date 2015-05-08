#include<stdio.h>

int main(void)
{
	int i;
	int res=0;

	for(i=1; i<11; i++){
		res+=i;
	}

	printf("The Result is %d\n",res);
	printf("%d\n",res);
	printf("The END");

	return 0;
}
